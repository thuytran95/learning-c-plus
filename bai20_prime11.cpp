#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n;
	cin >> n;
	long long sum = n;
	long long tong = 1;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			tong += i;
		}
		
		while(n % i == 0){
			n/= i;
		}
	}
	
	if(n > 1) tong += n;
	
	if(tong == sum){
		cout << 1 << endl;
	} else {	
		cout << 0 << endl;
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
