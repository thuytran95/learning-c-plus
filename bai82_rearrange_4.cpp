#include <bits/stdc++.h>
using namespace std;

/*
2
4
1 2 2 1
3
1 3 2
*/

void solve (){
	int n;
	cin >> n;
	
	int a[n], b[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	sort(a, a + n);
	
	int count = 0;
	
	// xen ke nhau
	for(int i = 0; i < n; i+=2){
		b[i] = a[count++];
	}
	
	for(int i = 1; i < n ; i+=2){
		b[i] = a[count++];
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
