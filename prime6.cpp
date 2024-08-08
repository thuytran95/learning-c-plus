#include <bits/stdc++.h>
using namespace std;

const int N = 1e4+5;
int prime[10000];

void sieve (){
    prime[0] = prime[1] = 1;

    for(int i = 0; i < sqrt(N); i++){
       if(prime[i] == 0){
            for(int j = i* i; j < N; j +=i){
                prime[j] = 1;
            }
       }
    }
}

void solve (){
    int n;
    cin >> n;

    for(int i = 2; i <= n/2; i++){
         // vi i + n-i chinh bang n do do chi can xet den n/2
        if(prime[i]== 0 && prime[n-i] == 0){
            cout <<  i << " " <<  n - i << endl;
            break;
        }
    }   

}

int main (){
    int t;
    cin >> t;

    sieve();

    while(t--){
    solve();

    }


    return 0;
}