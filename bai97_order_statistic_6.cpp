#include <bits/stdc++.h>
using namespace std;

/*
9
34 8 10 3 2 80 30 33 1

8
1 2 10 5 9 24 6 0
*/


void solve (){
	int n;
	cin >> n;
	
	int a[n];
	for(int i= 0; i < n; i++){
		cin >> a[i];
	}
	
	int res = 0;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] <= a[j]){
				res = max(res, j - i);
			}
		}
	}
	
	cout << res << endl;
}

int main (){
	solve();
	
	
	return 0;
}
