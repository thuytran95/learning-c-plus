#include <iostream>
#include <string.h>
using namespace std;



int ucln(int a, int b){
    if(b == 0) return a;
    return ucln(b, a % b);
}


class phanso{
    private:
        int tu, mau;
    public:
        phanso(){
            tu = 0;
            mau = 1;
        }

        phanso(int t, int m){
            tu = t;
            mau = m;
        }

        phanso (const char * s){
            int t, m;
            sscanf(s, "%d/%d", &t, &m);
            tu = t;
            mau = m;
        }

        void xemmh(){
            cout << tu << "/" << mau << endl;
        }

        phanso rutgon (){
            int kq = ucln(tu, mau);
            return phanso(tu / kq, mau / kq);
        }

        operator float(){
            return (float)tu / mau;
        }

        operator char*(){
            string s = to_string(tu) + "/" + to_string(mau);
            char *a = new char[s.length() + 1];
            strcpy(a, s.c_str());
            return a;
        }


        
        friend phanso operator + (phanso a, phanso b);
        friend phanso operator - (phanso a, phanso b);


        phanso operator * (phanso b){
            phanso c;
            c.tu = tu * b.tu;
            c.mau = mau * b.mau;
            return c;
        }

        phanso operator / (phanso b){
            phanso c;
            c.tu = tu * b.mau;
            c.mau = mau * b.tu;
            return c;
        }


};

phanso operator + (phanso a, phanso b){
    phanso c;
    c.tu = a.tu * b.mau + b.tu * a.mau;
    c.mau = a.mau * b.mau;
    return c;
}

phanso operator - (phanso a, phanso b){
    phanso c;
    c.tu = a.tu * b.mau - b.tu * a.mau;
    c.mau = a.mau * b.mau;
    return c;
}




int main (){
    phanso a(2, 3);
    a.xemmh();
    phanso b("3/4");
    b.xemmh();
    phanso c = a + b;
    c.xemmh();
    phanso d = a - b;
    d.xemmh();
    phanso e = a * b;
    e.xemmh();
    phanso g = a / b;
    g.xemmh();
    cout << (float) a << endl;


    return 0;
}