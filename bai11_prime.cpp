#include <bits/stdc++.h>
using namespace std;


int isPrime (long long n){
	if( n < 2) return 0;
	long long square = sqrt(n);
	for(int i = 2; i <= square; i++){
		if(n % i == 0) return 0;
	}
	
	return 1;
}


void solve(){
	long long n;
	cin >> n;	
	
	for(int i = 2; i <= sqrt(n); i++){
		while(n % i == 0){
			cout << i << " "; //vi no luon chia het tu so nho den so lon nen chac chan la so ngto
			n /= i;
		}
	}
	
	// truong hop n la so nguyen to hoac so ngto cuoi cung lon hon sqrtn
	if(n > 1) cout << n;
	cout << endl;
}

int main (){
	int t;
	cin >> t;
	while(t--){
	solve();
	}
	
	return 0;
}
