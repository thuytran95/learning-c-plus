#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

struct danhsach
{
    node *dau;
    node *cuoi;
};

void khoitao(danhsach &d)
{
    d.dau = d.cuoi = NULL;
}

node *taonode(int x)
{
    node *p = new node;
    p->data = x;
    p->next = NULL;
    return p;
}

void themdau(danhsach &d, int x)
{
    node *p = taonode(x);

    if (d.dau == NULL)
    {
        d.dau = d.cuoi = p;
    }
    else
    {
        p->next = d.dau;
        d.dau = p;
    }
}

void themcuoi(danhsach &d, int x)
{
    node *p = taonode(x);
    if (d.dau == NULL)
    {
        d.dau = d.cuoi = p;
    }
    else
    {
        d.cuoi->next = p;
        d.cuoi = p;
    }
}

int size(danhsach d)
{
    int dem = 0;
    node *p = d.dau;
    while (p != NULL)
    {
        dem++;
        p = p->next;
    }
    return dem;
}

void themvitrik(danhsach &d, int k, int x)
{
    if (k <= 1)
    {
        themdau(d, x);
        return;
    }

    int len = size(d);
    if (k >= len)
    {
        themcuoi(d, x);
        return;
    }

    node *t = d.dau;
    for (int i = 1; i < k - 1; i++)
    {
        t = t->next;
    }
    node *p = taonode(x);
    p->next = t->next;
    t->next = p;
}

void xoadau(danhsach &d, int &x)
{
    if (size(d) == 0)
    {
        x = -1;
        return;
    }

    if (d.dau == d.cuoi)
    {
        x = d.dau->data;
        khoitao(d);
        return;
    }

    node *p = d.dau;
    d.dau = d.dau->next;
    x = p->data;
    delete p;
}

void xoacuoi(danhsach &d, int &x)
{
    if (size(d) == 0)
    {
        x = -1;
        return;
    }

    if (d.dau == d.cuoi)
    {
        x = d.dau->data;
        khoitao(d);
        return;
    }

    node *p = d.dau;
    while (p->next->next != NULL)
    {
        p = p->next;
    }

    node *tmp = p->next;
    d.cuoi = p;
    p->next = NULL;
    x = tmp->data;
    delete tmp;
}

void hienthidanhsach(danhsach d)
{
    node *p = d.dau;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main()
{
    danhsach d;

    int ok = 1;
    char c;
    int x, k;
    while (ok)
    {
        cout << "0. Thoat" << endl;
        cout << "1. Khoi tao" << endl;
        cout << "2. Them dau" << endl;
        cout << "3. Them cuoi" << endl;
        cout << "4. Them vi tri k" << endl;
        cout << "5. Xoa dau" << endl;
        cout << "6. Xoa cuoi" << endl;
        cout << "7. Xoa vi tri k" << endl;
        cout << "8. Hien thi danh sach" << endl;
        cout << "9. Size" << endl;
        cin >> c;

        switch (c)
        {
        case '0':
        {
            ok = 0;
            break;
            ;
        }
        case '1':
        {
            khoitao(d);
            break;
        }
        case '2':
        {
            int x;
            cin >> x;
            themdau(d, x);
            break;
        }
        case '3':
        {
            cin >> x;
            themcuoi(d, x);
            break;
        }
        case '4':
        {
            cin >> k >> x;
            themvitrik(d, k, x);
            break;
        }
        case '5':
        {
            int res;
            xoadau(d, res);
            cout << res << endl;
            break;
        }
        case '6':
        {
            int res;
            xoacuoi(d, res);
            break;
        }

        case '8':
        {
            hienthidanhsach(d);
            break;
        }
        case '9':
        {
            cout << size(d) << endl;
            break;
        }
        }
    }

    return 0;
}