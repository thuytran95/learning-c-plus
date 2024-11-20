#include <iostream>
#include <string.h>
using namespace std;

class vecto{
    private:
        int a[10];
        int n;
    public:
        void nhapbp(){
            cout << "Nhap n =";
            cin >> n;
            for(int i = 0; i < n; i++){
                cout << "Nhap a[" << i << "] = ";
                cin >> a[i];
            }
        }

        
};

class matran{
    private:
        int b[10][10];
        int n, m;
    public:

};

int main (){
    

    return 0;
}