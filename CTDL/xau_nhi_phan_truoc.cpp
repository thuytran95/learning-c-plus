#include <bits/stdc++.h>
using namespace std;

int last1Index (string s) {
	int index = -1;
	for(int i = s.length() - 1; i >= 0; i--){
		if(s[i] == '1'){
			index = i;
			break;
		}
	}
	
	return index;
}

void solve(){
	string s;
	cin >> s;
	
	int length = s.length();
		
	int lastIndex = last1Index(s);
	if(lastIndex != -1){
		for(int i = 0; i < lastIndex; i++){
			cout << s[i];
		}
		
		// thuat toan sinh: tat ca so dang tu so 1 ben phai tro ve sau thanh 0
		for(int i = lastIndex; i < length; i++){
			cout << 0;	
		}
		
	} else {
		for(int i = 0; i < length; i++){
			cout << 1;
		}
	}
	
	cout << endl;	
}

void solve2(){
	string s;
	cin >> s;
	
	int length = s.length();
	while(length--){
		if(s[length] == '1'){
			s[length] = '0';
			break;
		} else{
			s[length] = '1';
		}
	}
	
	cout << s << endl;
}


int main(){
	solve2();
	
	return 0;
}
