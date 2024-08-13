#include <bits/stdc++.h>
using namespace std;

/*
6
2 2 0 4 0 8
10 
0 2 2 2 0 6 6 0 0 8
*/

void solve(){
	int n;
	cin >> n;
	
	int a[n], b[n] = {0};
	for(int i =0; i < n; i++){
		cin >> a[i];
	}
	
	int count = 0;
	for(int i = 0; i < n - 1; i++){
		if(a[i] != 0 && a[i + 1]== a[i]){
			a[i] *= 2;
			a[i + 1] = 0;
		} 
		
		if(a[i]!= 0){
			b[count++] = a[i];
		}
	
	}
	
	if(a[n - 1] != 0){
		b[count] = a[n - 1];
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
