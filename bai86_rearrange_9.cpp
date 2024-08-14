#include <bits/stdc++.h>
using namespace std;

/*
2
5
2 3 4 5 6
6 
9 7 12 8 6 5
*/

void solve (){
    int n;
    cin >> n;
    
    int a[n];
    long long b[n];


    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    
    b[0] = a[0] * a [1];
    b[n-1] = a[n-1] * a [n-2];

    for(int i = 1; i < n - 1; i++){
        b[i] = a[i - 1] * a[i +1];
    }

    for(int i = 0; i < n; i++){
        cout <<  b[i] << " ";
    }
    cout << endl;
}

int main (){
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}