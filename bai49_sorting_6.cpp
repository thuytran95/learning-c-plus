#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+5;
int a[N];

void solve (){
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	} 	
	
	sort(a, a + n);
	
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
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
