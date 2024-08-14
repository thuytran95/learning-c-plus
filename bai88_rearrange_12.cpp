#include <bits/stdc++.h>
using namespace std;
/*
5
6 -3 -10 0 2
6 
2 3 4 5 -1 0
10
8 -2 -2 0 8 0 -6 -8 -6 -1

 */

void solve (){
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int res = a[0];
    for(int i = 0; i < n; i++){
        int temp = 1;
        for(int j = i; j < n; j++){
            if(a[j] == 0) break;
            temp *= a[j];
            res = max(res, temp);
        }
    }

    cout << res <<endl;
}

int main (){
    solve();


    return 0;
}