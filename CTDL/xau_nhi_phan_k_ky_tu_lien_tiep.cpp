#include <bits/stdc++.h>
using namespace std;
string s;
int n, k;

int checkKConsecutiveA(){
	int consecctive = 0;
	int i = 1;
	for(int i = 0; i < n - k + 1; i++){
		int cnt = 0;
		for(int j = i; j < i + k; j++){
			if(s[j] == 'A'){
				cnt++;
			}
		}
		if(cnt == k){
			consecctive++;
		}
	}
	
	return consecctive == 1;
}

void out (){
	for(int i = 0; i < n; i++){
		cout << s[i];
	}
	cout << endl;
}


void Try (int i){
	for(char j = 'A'; j <= 'B'; j++){
		s[i] = j;
		if(i == n - 1){
			if(checkKConsecutiveA()){
				out();
			}
		} else {
			Try(i+1);
		}
	}
	
}

int main (){
	cin >> n >> k;
	Try(0);
	
	return 0;
}
