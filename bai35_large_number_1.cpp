#include <bits/stdc++.h>
using namespace std;
/*
	length a = length b: tim den khi nao so nao lon hon
	length a > length b;
	When you subtract b from a ('3' - '1'), 
	you're actually subtracting their ASCII values, which gives 51 - 49 = 2.
	2 is number not char

*/


void solve (){
	string a, b;
	cin >> a >> b;
	
	while(a.length() < b.length()){
		a  = "0"  + a;
	}
	
	while(b.length() < a.length()){
		b = "0" + b;
	}
	
	if(a < b){
		swap(a, b);
	}
	
	int lastIndex = a.length() - 1;
	string res = "";
	for(int i = lastIndex; i > 0; i--){
		if(a[i] >= b[i]){
			res = char(a[i] - b[i] + '0') + res;
		} else{
			res = char(a[i] - b[i] + 10 + '0') + res;
			a[i-1]--;
		}
	}
	
	res = char(a[0] - b[0] + '0') + res;
	cout << res << endl;
	
}

int main (){
	int t;
//	cin >> t;

	solve();
	
	
	return 0;
}
