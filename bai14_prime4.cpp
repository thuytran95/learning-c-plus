#include <bits/stdc++.h>
using namespace std;

int isprime(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	
	return -1;
}

void solve (){
	int n;
	cin >> n;
	
	
	for(int i = 1; i <= n; i++){
		if(i == 1) {
			cout << 1 << " ";
			continue;
		}
		
		if(i % 2 == 0){
			cout << 2 << " ";
			continue;
		}
		
		
		
		
	}
	
	cout << endl;
}

int main (){
	int t;
//	cin >> t;

	solve();
	
	
	
	return 0;
}
