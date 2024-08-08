#include <bits/stdc++.h>
using namespace std;



void solve (){
	string x, y;
	cin >> x >> y;
	
	while(x.length() < y.length()){
		x = "0" + x;
	}
	
	while(y.length() < x.length()){
		y = "0" + y;
	}
	
	int lengthX = x.length() - 1;
	int carry = 0;
	string res = "";
	for(int i = lengthX; i >= 0; i--){
		int temp = x[i] - '0' + y[i] - '0' + carry;
		int donvi = temp % 10;
		carry = temp / 10;
		res = char(donvi + '0') + res;
	}
	
	if(carry > 0){
		res = "1" + res;
	}
	cout << res << endl;
}

int main (){
	int t;
	cin >> t;
	
	while(t--){
		solve();
	}
	
	return 0;
}
