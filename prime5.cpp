#include <bits/stdc++.h>
using namespace std;
const int N = 1e4+5;
int prime[N];

int soNguyento(long long n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }

    return 1;
}

void solve (){
    int n, m;
    cin >> n >> m;

    if(n > m){
        int temp = n;
        n = m;
        m = temp;
    }

    for(int i = n; i <=m; i++){
        if(soNguyento(i)){
            cout << i << " ";
        }
    }
    cout << endl;
}

void sieve(){
    prime[0] = 1;
    prime[1] = 1;
    for(int i = 2; i <=sqrt(N); i++){
        if(prime[i] == 0){
            for(int j= i * i; j < N; j+=i){
                prime[j] = 1; 
            }
        }
    }
    
}


void solve2(){
    int n, m;
    cin >> n >> m;

    if(n > m){
        int temp = n;
        n = m;
        m = temp;
    }

    for(int i = n ; i <= m; i++){
        if(prime[i] == 0){
            cout << i << " ";
        }
    }

    cout << endl;
}

int main(){
    sieve();
    solve2();
    
    return 0;
}