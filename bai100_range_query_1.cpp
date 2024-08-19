#include <bits/stdc++.h>
using namespace std;

/*
9 3
1 1 2 1 3 4 5 2 8
1 5
2 4
3 5
*/

long long sum (int a[], int left, int right){
	long long res = 0;
	for(int i = left; i <= right; i++){
		res += a[i];
	}
	
	return res;
}

void solve (){
	int n, question;
	cin >> n >> question;
	
	int a[n];
	int Q[question][2];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	int total = question * 2;
	for(int i = 0; i < total; i++){
		cin >> Q[i / total][i % total];
	}
	
	for(int i = 0; i < question; i++){
	 cout << sum (a, Q[i][0] - 1, Q[i][1] - 1) << endl;
	}		
}

int main (){
	solve();
	
	return 0;
}
