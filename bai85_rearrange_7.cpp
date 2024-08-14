#include <bits/stdc++.h>
using namespace std;
/**
 2
 4 
 54 546 548 60
 8
 1 34 3 98 9 76 45 4
 */

bool compare (string a, string b){
    string ab = a + b;
    string ba = b + a;
    return ab > ba;
}

void solve (){
    int n;
    cin >> n;

    string a[n];
    for(int i= 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a + n, compare);

    string res = "";
    for(int i = 0; i < n; i++){
        res += a[i];
    }

    cout << res << endl;


}

int main (){
    int t;
    cin >> t;

    while(t--){
    solve();
    }

    return 0;
}