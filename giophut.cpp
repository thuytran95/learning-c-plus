#include<iostream>
#include <string.h>
using namespace std;

class thoigian {
    private:
        int gio, phut;
    public: 
      thoigian(int g, int p){
        gio = g;
        phut = p;
      }

      thoigian(){
        gio = 0;
        phut = 0;
      }

      thoigian (const char *s){
        int g, p;
        sscanf(s, "gio %d phut %d", &g, &p);
        gio = g;
        phut = p;
      }

      void xemmh(){
          cout << "gio " << gio << " phut " << phut << endl;
      }

      void rutgon(){
        gio = gio + phut / 60;
        phut = phut % 60;
        
      }

      operator char *(){
        string s = "gio " + to_string(gio) + " phut " + to_string(phut);
        char * a  = new char[s.length() + 1];
        strcpy(a, s.c_str());
        return a;
      }

      
      friend thoigian operator + (thoigian a, thoigian b);
      friend thoigian operator - (thoigian a, thoigian b);
      

      thoigian operator * ( thoigian b){
        thoigian c;
        c.gio  = gio * b.gio;
        c.phut = phut * b.phut;
        c.rutgon();
        return c;
      }


      thoigian operator * (int soNhan){
        thoigian c;
        c.gio = gio  * soNhan;
        c.phut = phut * soNhan;
        c.rutgon();
        return c;
      }

      thoigian  operator / (thoigian b){
        thoigian c;
        c.gio = gio / b.gio;
        c.phut = phut / b.phut;
        c.rutgon();
        return c;
      }

      thoigian operator / (int soNhan){
        thoigian c;
        c.gio = gio / soNhan;
        c.phut = phut / soNhan;
        c.rutgon();
        return c;
      }
    
};

thoigian operator + (thoigian a, thoigian b){
    thoigian c;
    c.gio = a.gio + b.gio;
    c.phut = a.phut + b.phut;
    c.rutgon();
    return c;
}


thoigian operator - (thoigian a, thoigian b){
    thoigian c;
    c.gio = a.gio - b.gio;
    if(a.phut < b.phut){
        c.phut = a.phut + 60 - b.phut;
        c.gio--;
    }

    c.rutgon();
    return c;
    
}


int main (){
    thoigian a(10, 20);
    a.xemmh();
    // cout << "Nhap so muon nhan = ";
    // int soNhan;
    // cin >> soNhan;
    // thoigian f = a * soNhan;
    // f.xemmh();
    // cout << "Ket qua nhan 2 thoi gian = ";
    // thoigian h = a* f;
    // h.xemmh();
    cout << "Nhap so chia = ";
    int soChia;
    cin >> soChia;
    thoigian k = a / soChia;
    k.xemmh();
    cout << "Ket qua chia 2 thoi gian = ";
    thoigian l = a / k;
    l.xemmh();
    // int g, p;
    // cout << "Nhap gio, phut = ";
    //  cin  >> g >> p;
    //  thoigian b(g, p);
    //  b.xemmh();
    //  thoigian c = a + b;
    //  thoigian d = a - b;
    //  cout << "c = ";
    //  c.xemmh();
    //  cout << "d = ";
    //  d.xemmh();

    //  thoigian e("gio 10 phut 20");
    //  cout << "e = ";
    //  e.xemmh();
    

    return 0;
}