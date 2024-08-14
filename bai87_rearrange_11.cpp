#include <bits/stdc++.h>
using namespace std;
/*
Bitonic array: khong chon elemnt hoac sap xep lai
chi kiem tra xem co the substract dk phan tu nao thanh dang bitonic array
2
6
12 4 78 90 45 23
8
1 11 2 10 4 5 2 1
Solution: 
count so luong phan tu lam day tang dan lien tiep
count so luong phan tu lam dy giam dan lien tiep tu last index ve dau
max length =  increment[i] + decrement[i] - 1
*/

void solve(){
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int increment[n] = {0};
    int decrement[n] = {0};
    increment[0] = 1;
    for(int i = 1; i < n; i++){
        if(a[i - 1] <= a[i]){
            increment[i] = increment[i - 1] + 1;
        } else {
            increment[i] = 1;
        }

        
    }


    decrement[n-1] = 1;
    for(int i = n - 2; i>= 0; i--){
        if(a[i] >= a[i + 1]){
            decrement[i] = decrement[i + 1] + 1;
        } else{
            decrement[i] = 1;
        }
    }

    int maxLen = 0;
    for(int i = 0; i < n; i++){
        maxLen = max(maxLen, increment[i] + decrement[i] - 1);
    }

    cout << maxLen << endl;  
}

int main (){
    solve();

    return 0;
}