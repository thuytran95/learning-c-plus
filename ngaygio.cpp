#include <iostream>
#include <string.h>

using namespace std;

class thoigian {
    private:
        int ngay, gio;
    public: 
        thoigian (){
            ngay = 0;
            gio = 0;
        }

        thoigian (int n, int g){
            ngay = n;
            gio = g;
        }

        thoigian (const char *s){
            int n, g;
            sscanf(s, "ngay %d gio %d", &n, &g);
            ngay = n;
            gio = g;
        }

        void xemmh(){
            cout << "ngay " << ngay << " gio " << gio << endl;
        }

        void rutgon(){
            ngay = ngay + gio / 24;
            gio = gio % 24;
        }


        operator char*(){
            string s= "ngay " + to_string(ngay) + " gio " + to_string(gio);
            char *a = new char[s.length() + 1];
            strcpy(a, s.c_str());
            return a;
        }


        friend thoigian operator + (thoigian a, thoigian b);
        friend thoigian operator - (thoigian a, thoigian b);

        thoigian operator * (thoigian b){
            thoigian c;
            c.ngay = ngay * b.ngay;
            c.gio = gio * b.gio;
            c.rutgon();
            return c;
        }


        thoigian operator * (int soNhan){
            thoigian c;
            c.ngay = ngay * soNhan;
            c.gio = gio * soNhan;
            c.rutgon();
            return c;
        }

        thoigian operator /(thoigian b){
            thoigian c;
            c.ngay = ngay / b.ngay;
            c.gio = gio / b.gio;
            c.rutgon();
            return c;
        }

        thoigian operator /(int soChia){
            thoigian c;
            c.ngay = ngay / soChia;
            c.gio = gio / soChia;
            c.rutgon();
            return c;
        }
};

thoigian operator + (thoigian a, thoigian b){
    thoigian c;
    c.ngay = a.ngay + b.ngay;
    c.gio = a.gio + b.gio;
    c.rutgon();
    return c;

}

thoigian operator - (thoigian a, thoigian b){
    thoigian c;
    c.ngay = a.ngay - b.ngay;
    if(a.gio < b.gio){
        c.gio = a.gio + 24 - b.gio;
        c.ngay--;
    }

    c.rutgon();
    return c;
}


int main (){
    thoigian a(2, 12);
    a.xemmh();
    thoigian b("ngay 3 gio 5");
    b.xemmh();
    thoigian c = a + b;
    c.xemmh();
    thoigian d = a - b;
    d.xemmh();
    thoigian e = a * b;
    e.xemmh();
    thoigian f = a * 3;
    f.xemmh();
    thoigian g = a / b;
    g.xemmh();


    return 0;
}