#include <iostream>
using namespace std;
class SinhVien
{
private:
    int ma;
    string ten;
    float diem1, diem2, diem3;

public:
    void nhap(int stt)
    {
        this->ma = stt;
        getline(cin, this->ten);
        cin >> this->diem1 >> this->diem2 >> this->diem3;
        cin.ignore();
    }

    void xuat()
    {
        cout << this->ma << " " << this->ten << " " << this->diem1 << " " << this->diem2 << " " << this->diem3 << endl;
    }
}

struct node
{
    SinhVien sv;
    node *next;
};

struct danhsach
{
    node *dau, *cuoi;
}

void
khoitao(danhsach &d)
{
    d.dau = d.cuoi = NULL;
}

bool kiemtrarong(danhsach d)
{
    return d.dau == NULL;
}

void hiendanhsach(danhsach d)
{
    node *p = d.dau;
    while (p != NULL)
    {
        p->sv.xuat();
        p = p->next;
    }
}

int size(danhsach d)
{
    int dem = 0;
    node *p = d.dau;
    while (p != NULL)
    {
        dem++;
        p = p->next
    }
    return dem;
}

void themdau(danhsach &d)
{
    node *p = new node;
    int stt = size(d) + 1;
    p->sv.nhap(stt);
    p->next = NULL;
    if (d.dau == NULL)
    {
        d.dau = d.cuoi = P;
    }
    else
    {
        p->next = d.dau;
        d.dau = p;
    }
}

void themcuoi(danhsach &d)
{

    node *p = new node;
    int stt = size(d) + 1;
    p->sv.nhap(stt);
    p->next = NULL;

    if (d.dau == NULL)
    {
        themdau(d);
    }
    else
    {
        d.cuoi->next = p;
        d.cuoi = p;
    }
}

int main()
{
    danhsach d;
    khoitao(d);
    char c;

    bool ok = true;
    while (ok)
    {
        cout << "1. Nhap so luong sinh vien can them\n";
        cout << "2. chinh sua thong tin sinh vien\n";
        cout << "3. Xuat thong tin danh sach sinh vien\n";

        cin >> c;

        switch (c)
        {
        case '1':
                int n;
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                 themcuoi(d);
            }
            break;

        case '3':
        {
            hiendanhsach(d);
        }
        }
    }

    return 0;
}