#include <bits/stdc++.h>
using namespace std;
string s;
int n;

void out(){
	for(int i = 0; i < n; i++){
		cout << s[i];
	}
	cout << endl;
}

void Try (int i){
	for(int j = 0; j <= 1; j++){
		s[i] = j + 'A';
		if(i == n - 1) {
			out();
		}
		else{
			Try(i + 1);
		}
	}
}

int main (){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		Try(0);
	}
	
	return 0;
}
