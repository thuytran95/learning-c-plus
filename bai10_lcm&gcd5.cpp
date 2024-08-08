#include <bits/stdc++.h>
using namespace std;

/*
	https://www.geeksforgeeks.org/gcd-two-numbers-formed-n-repeating-x-y-times/
	uoc chung lon nhat cua x time a va y times a 
	tuong duong voi ucln cua x, y times a

*/

void solve (){
	long long a, x, y;
	cin >> a >> x >> y;
	int repeat = __gcd(x, y);
	
	for(int i = 0; i < repeat; i++){
		cout << a;
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
