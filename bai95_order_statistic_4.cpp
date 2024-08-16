#include <bits/stdc++.h>

using namespace std;

/*
3
5 
3 2 5 10 7
6
5 5 10 100 10 5
1 20 3
*/

void solve (){
	int n;
	cin >> n;
	
	int a[n];
	for(int i = 0; i < n; i++){
		cin  >> a[i];
	}
	
	long long max = a[0];
	for(int i = 0; i < n - 2;i++){
		long long res = 0;
		for(int j = i; j < n; j+=2){
			res = res + a[j];
		}
		
		if(max < res){
			max = res;
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
