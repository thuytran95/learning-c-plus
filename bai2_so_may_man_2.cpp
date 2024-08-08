#include <bits/stdc++.h>
using namespace std;

void checksomaymay(){
	string s;
	cin >> s;
	
	int length = s.length();
	long long sum = 0;
	
	for(int i =0; i <length; i++){
		sum += s[i] - '0'; // chuyen ky tu sang so
		if(sum > 9) {
			cout << 0 << endl;
			break;
		}
	}

	if(sum == 9) {
		cout << 1 << endl;
	} else {
		cout << 0 << endl;
	}
	
}

int main () {
	int t;
	cin >> t;
	string s;
	
	while(t--){
		checksomaymay();
	}
	
	return 0;
}
