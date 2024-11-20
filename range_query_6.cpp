#include <bits/stdc++.h>
using namespace std;

/*
7
1 101 2 3 100 4 5

 */

void solve (){
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n ; i++){
        cin >> a[i];
    }

    long long sum = a[0];
    long long res = a[0];
    for(int i = 1; i < n; i++){
        if(a[i - 1] > a[i]){
            sum += a[i];
        } else {
            sum = a[i];
        }
        res = max(res, sum);
    }


    cout << res << endl;
    

}

int main (){
    solve();

    return 0;
}