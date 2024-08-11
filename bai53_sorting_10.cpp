#include <bits/stdc++.h>
using namespace std;
const int N = 1e7+5;
long long a[N];

void solve(){
	int n;
	cin >> n;
	int number[10] = {0};
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	int cnt = 0;	
	for(int i = 0; i < n; i++){
		int temp = a[i];
		
		while(a[i]){
			int dv = a[i] % 10;
			if(number[dv] == 0){
				number[dv]++;
				cnt++;
			}
			a[i] /= 10;
		}
		
		// dem du 10 so thi break
		if(cnt == 10) break;
	}
	
	
	for(int i = 0; i < 10; i++){
		if(number[i] != 0){
			cout << i << " ";
		}
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
