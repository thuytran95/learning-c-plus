#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+5; //1005
int prime[N];

void sieve(){
	prime[0] = prime[1] = 1;
	for(int i =2; i <= sqrt(N); i++){
		if(prime[i] == 0){
			for(int j = i * i; j < N; j+=i){
				prime[j] = 1;
			}
		}
	}
}

void solve (){
	int n;
	cin >> n;
	
	cout << 1 << " ";
	// duyet tat ca cac so tu 1 den n
	for(int i = 2; i <= n; i++){
		// duyet de lay uoc so nho nhat cua tung so
		for(int j = 2; j <= i ; j++){
			//nho nhat nen check xem i % j hay ko
			if(prime[j] == 0 && i % j == 0){
				cout << j << " ";
				//lay 1 gia tri nho nhat nen can break ngay khi tim dk
				break;
			}
		}
	}
	
	cout << endl;
}

int main (){
	int t;
	cin >> t;
	
	sieve();
	
	while (t--){
		solve();
	}
	
	return 0;
}
