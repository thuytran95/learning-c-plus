#include <bits/stdc++.h>
using namespace std;

void solve (){
	long long n, k;
	cin >> n >> k;
	
	long long res = 0;
	for(int i = 1; i <= n; i++){
		res += i % k;
		if(res > k){
			cout << 0 << endl;
			return; // end function
		}
	}
	
	if(res == k){
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
