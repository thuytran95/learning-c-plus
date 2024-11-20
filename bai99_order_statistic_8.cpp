#include <bits/stdc++.h>
using namespace std;

/*
5
1 2 7 4 3
4
1 2 4 3
*/

void solve (){
	int n;
	cin >> n;
	
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	int mid = n / 2;
	int maxValue = a[mid];
	maxValue = max(maxValue, max(a[mid - 1], a[mid + 1]));
	
	cout << maxValue;	
}

int main (){
	solve();
	
	return 0;
}
