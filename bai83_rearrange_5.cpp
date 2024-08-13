#include <bits/stdc++.h>
using namespace std;

/*
5
1 5 3 2 7
6
1 3 2 7 9 8
*/

void solve (){
	int n;
	cin >> n;
	
	int a[n], b[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	// sort, sau do map gia tri lon nhat, nho nhat, tang bien dem
	sort(a, a + n);
	int count = 0;
	for(int i = 0; i <= n / 2; i++){
		b[count++] = a[n - 1 - i];
		b[count++] = a[i];
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
