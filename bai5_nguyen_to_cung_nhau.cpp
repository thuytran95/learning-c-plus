#include <bits/stdc++.h>
using namespace std;

int soNguyenTo(int n){
	if( n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++ ){
		if(n % i == 0) return 0;
	}
	return 1;
}

int main (){
	int t, n;
	cin >> t;

	
	while (t--){
		int count = 0;
		cin >> n;
		for(int i = 0; i < n; i++){
			// uoc cung lon nhat = 1, de i vs n cung la nguyen to
			if(__gcd(i, n) == 1) count++;
		}
		cout << soNguyenTo(count) << endl;
	}
	
	
	return 0;
}
