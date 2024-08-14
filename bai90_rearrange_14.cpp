#include <bits/stdc++.h>
using namespace std;

/*
3 4
1 3 5 7
2 4 6 8
0 9 10 11
*/

void solve (){
    int k, n;

    cin >> k >> n;
    int a[k][n];

    for(int i = 0 ; i < k; i++){
        for(int j = 0; j < n; j++){
            cin >>  a[i][j];
        }
    }


    int total = n * k;

    int res[total];
    for(int i = 0; i < total; i++){
        res[i] = a[i / total][i % total];
    }

    sort(res , res + total);
    for(int i = 0; i < total; i++){
        cout << res[i] << " ";
    }
    cout << endl;
}


void solve2 (){
    int k, n;

    cin >> k >> n;
    int a[k][n];

    for(int i = 0 ; i < k; i++){
        for(int j = 0; j < n; j++){
            cin >>  a[i][j];
        }
    }

    for(int i = 0; i < )


}

int main () {
    solve2();

    return 0;
}