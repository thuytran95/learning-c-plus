#include <bits/stdc++.h>
using namespace std;

void solve (){
    int n;
    cin >> n;

    for(int i = 2; i <= sqrt(n) ; i++){
        int cnt = 0;
    
        while(n % i == 0){
            cnt++;
            n /=i;
        }

        if(cnt){
           cout << i << " " << cnt << " ";
        }
    }

    // trung hop n la so nguyen to hoac so ngto do lon hon sqrt(n)
    if(n > 1) cout << n << " " << 1;

    cout << endl;

}

int main (){
    solve();

    return 0;
}