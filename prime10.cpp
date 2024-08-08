#include <bits/stdc++.h>

using namespace std;

int tongchuso(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }

    return sum;
}


void solve(){
    int n;
    cin >> n;

    int init = n;

    
    int sumNgto = 0;
    for(int i = 2; i <= sqrt(n); i++){
        while(n % i == 0){
            sumNgto += tongchuso(i);
            n /= i;
        }
    }


    if(n > 1) {
        sumNgto +=tongchuso(n);
    }

    if(sumNgto == tongchuso(init)){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

}

int main (){
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}