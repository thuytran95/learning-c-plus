#include <bits/stdc++.h>
using namespace std;
/*
9 3
1 2 3 1 4 5 2 3 6
10 4
8 5 10 7 9 4 15 12 90 13

9 5
1 24 7 8 15 4 6 2 3
*/

void solve (){
	int n, k;
	cin >> n >> k;
	
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	for(int i = 0; i < n - k + 1; i++){
		int localMax = a[i];
		for(int j = i + 1; j < i + k; j++){
			localMax = max(localMax, a[j]);
		}
		cout << localMax << " ";
	}
	
}

int main (){
	solve();
	
	
	
	
	return 0;
}
