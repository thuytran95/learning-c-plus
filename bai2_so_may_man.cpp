#include <bits/stdc++.h>
#define SO_MAY_MAN 86
#define MAX 100
using namespace std;

void checksomayman(string s){
	int length = s.size();
	if(s[length -1] == '6' && s[length - 2] == '8') {
		cout << 1 << endl;
	} else {	
		cout << 0 << endl;
	}
}

int main (){
	int t;
	cin >> t;
	
	string s[MAX];
	for(int i = 0; i < t; i++){
		cin >> s[i];
	}
	
	for(int i = 0; i < t; i++){
		checksomayman(s[i]);
	}
	return 0;
}
