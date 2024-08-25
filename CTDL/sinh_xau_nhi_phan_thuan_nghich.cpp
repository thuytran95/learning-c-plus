#include <bits/stdc++.h>
using namespace std;
int n;
string s;

void out (){
	for(int i = 0; i < n; i++){
		cout << s[i];
	}
	cout << endl;
}

int checkRerverseStr(){
	int left = 0, right = n - 1;
	while(left < right){
		if(s[left] != s[right]){
			return 0;
		}
		left++;
		right--;
	}
	return 1;
}

void Try (int i){
	for(int j = 0; j <= 1; j++){
		s[i] = j + '0';
		if(i == n - 1){
			if(checkRerverseStr()){
				out();
			}
		} else {
			Try(i + 1);
		}
	}
}

int main (){
	cin >> n;
	Try(0);
	
	return 0;
}
