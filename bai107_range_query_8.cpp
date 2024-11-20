#include <bits/stdc++.h>
using namespace std;

/*
6 4
1 12 -5 -6 50 3
5 2
10 4 5 15 20
4 2
-12 34 56 7
*/

void solve (){
	int n, k;
 	cin >> n >> k;
 	
 	int a[n];
 	for(int i = 0; i < n; i++){
 		cin >> a[i];
	}
	
	long long maxAverage = a[0];
	int start = 0;
	for(int i = 0; i < n - k + 1; i++){
		long long res = 0;
		for(int j = i; j < i + k; j++){
			res += a[j];
		}
		
		if(maxAverage < res){
			start = i;
			maxAverage = res;
		}
	}
	
	for(int i = start; i < start + k; i++){
		cout << a[i] << " ";
	}
}

int main (){
	solve();	
	return 0;
}
