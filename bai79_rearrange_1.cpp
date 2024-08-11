#include <bits/stdc++.h>
const int N = 1e7+5;
long long a[N];

using namespace std;
/*
1 
10
-1 -1 6 1 9 3 2 -1 4 -1
*/

struct data {
	long long value;
	int index;
};



void solve (){
	int n;
	cin >> n;
	
	long long b[n];	
	for(int i = 0; i < n; i++){
		b[i] = -1;
	}
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] < n){
			b[a[i]] = a[i];
		}	
	}
	
	
	for(int i = 0; i < n; i++){
		cout << b[i] << " ";
	}
	
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
