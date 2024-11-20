#include <bits/stdc++.h>
using namespace std;
int n, k;
string s;

bool checkNbit1(){
	int dem = 0;
	for(int i = 1; i <=n; i++){
		if(s[i] == '1'){
			dem++;
		}
	}
	
	return dem == k;
}

void out (){
	for(int i = 1; i <= n; i++){
		cout << s[i];
	}
	cout << endl;
}

void Try (int i, int &dem){	
	for(int j = 0; j <= 1; j++){
		s[i] = j + '0';
		if(j == 1){
			dem++;
		}
		
		if(i == n) {
			if(checkNbit1()){
				out();
			}
		} else{
			Try(i + 1, dem);
		}
	}
	
}


int main (){
	cin >> n >> k;
	int dem = 0;
	Try(1, dem);
	
	return 0;
}
