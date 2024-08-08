#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+5; 
int prime[N];

void sieve(){
	prime[0] = prime[1] = 1;
	for(int i = 2; i <= sqrt(N);i++){
		if(prime[i] == 0){
			for(int j = i * i; j < N; j+=i){
				prime[j] = 1;
			}
		}	
			
	}
}


void solve (){
	int l, r;
	cin >> l >> r;
	
	int cnt = 0;
	for(int i = sqrt(l); i <= sqrt(r); i++){
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
