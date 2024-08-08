#include <bits/stdc++.h>
using namespace std;

void solve (){
	long long n;
	cin >> n;
	long long max = 1;
	for(int i = 2; i <= sqrt(n); i++){
		while(n % i == 0){
			max= i;	// luon duoc cap nhat		 
			 n /= i;
		}
	}
	
	if(n > 1) {
		max = n;
	}
	
	cout << max << endl;
}

int main (){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	
	
	return 0;
}
