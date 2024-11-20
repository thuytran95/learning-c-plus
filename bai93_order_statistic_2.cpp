#include <bits/stdc++.h>
using namespace std;

/*
2 
6
7 10 4 3 20 15
6
9 7 12 8 6 5
*/

void solve (){
	int n;
	cin >> n;
	int a[n];
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	int max = a[0];
	for(int i = 1; i < n; i++){
		if(max < a[i]){
			max = a[i];
		}
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
