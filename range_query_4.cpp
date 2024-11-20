#include <bits/stdc++.h>
using namespace std;

/*
3
8
-2 -3 4 -1 -2 1 5 -3
5
1 2 3 -2 5
4
-1 -2 -3 -4
*/


void solve (){
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    long long sum = (long long)a[0];
    for(int i = 0; i < n - 1; i++){
        long long temp = (long long)a[i];
        for(int j = i + 1; j < n; j++){
            temp += a[j];
            sum = max(sum, temp);
        }
    }

    cout << sum << endl;
}

int main (){
    int t;
    cin >> t;

    while (t--)
    {
     solve();
    }
    

    return 0;
}