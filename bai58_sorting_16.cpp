#include <bits/stdc++.h>
#define MAX 10000
using namespace std;
int dp[100005] = {0};


bool compare (int x, int y){
	if(dp[x] == dp[y]) return x < y;
	return dp[x] > dp[y];
}


void out (int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
void solve (){
	int n, a[MAX];
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
		dp[a[i]]++;
	}

	sort(a, a + n, compare);	
	out(a, n);
}

int main (){
	int t;
	cin >> t;
	
	while(t--){
		solve();
	}
	
	return 0;
}
