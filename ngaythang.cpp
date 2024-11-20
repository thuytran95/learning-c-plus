#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class thoigian
{
        private:
    int thang, nam;

        public:
        thoigian(){
            thang = 0;
            nam = 0;
        }
    thoigian(int t, int n)
    {
        thang = t;
        nam = n;
    }

    void nhapbp()
    {
        cout << "Nhap thang: ";
        cin >> thang;
        cout << "Nhap nam: ";
        cin >> nam;
    }

    void xemmh()
    {
        cout << "thang " << thang << " nam " << nam << endl;
    }


    int getThang() {
        return thang;
    }

    int getNam ()
{
    return nam;
}
    friend bool operator<(thoigian a, thoigian b);


    friend int operator - (thoigian a, thoigian b);


};

bool
operator<(thoigian a, thoigian b)
{
    if (a.nam != b.nam)
    {
        return a.nam < b.nam;
    }
    return a.thang < b.thang;
}

int operator - (thoigian a, thoigian b){
    if( a < b) return 0;
    int soNam = a.nam - b.nam;
    return soNam * 12 + a.thang - b.thang;
}

thoigian operator - (thoigian a, int thang){
    int soNam = thang / 12;
    int soThang = thang % 12;

    int nam = a.getNam() - soNam;
    int thangMoi = a.getThang() - soThang;
    if(a.getThang() <= soThang){
        nam--;
        thangMoi +=12;
    }

    return thoigian(thangMoi, nam);

}



int main()
{

    thoigian a, b(10 ,2010), c;
    a.nhapbp();
    a.xemmh();
    cout << (a < b) << endl;
     c = a - 12;
     c.xemmh();

    return 0;
}