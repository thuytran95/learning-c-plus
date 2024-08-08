#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+5; //1000005
int prime[N];


void sieve(){
	prime[0] = prime[1] = 1;
	for(int i = 2; i <= sqrt(N); i++){
		if(prime[i] == 0){
			for(int j = i * i; j < N; j += i){
				prime [j] = 1;
			}
		}
	}
}


void solve(){
	int n;
	cin >> n;
	
	int cnt = 0;
	// y tuong tuong tu bai 17
	for(int i = 2; i <= sqrt(n); i++){
		if(prime[i] == 0){
			cnt++;
		}
	}
	
	cout << cnt << endl;
	
}

int main (){
	sieve();
	solve();
	
	return 0;
}
