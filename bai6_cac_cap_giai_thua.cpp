#include <bits/stdc++.h>
using namespace std;


void solve (){
	int n;
	string s;
	cin >> n >> s;
	int a [10] = {0};	
	/*
	so lon hon lam the nao de viet sang giai thua cua so nho hon
	VD: 4 = 1 * 2 * 3 * 4 => 2! * 3!
		5= 5!
		6 = 5! * 2 * 3 => 5! * 3!
		7 = 7!
		8 = 7! * 2^3 => 7! * (2!)^3
		9 = 7! * 2^3 * 3^2 = 7! * (3!)^2 * 2!
	*/
	for(int i = 0; i < n; i++){
		int temp = s[i] -'0';
		switch(temp){
			case 2: {
				 a[2]++;
				break;
			}
			case 3: {
				a[3]++;
				break;
			}
			case 4 : {
				a[2] +=2;
				a[3]++;
				break;
			}
			case 5: {
				a[5]++;
				break;
			}
			case 6 : {
				a[5]++;
				a[3]++;
				break;
			}
			case 7: {
				a[7]++;
				break;
			}
			case 8:{
				a[7]++;
				a[2] +=3;				
				break;
			}
			case 9 : {
				a[7]++;
				a[3] += 2;
				a[2]++;
				break;
			}
		}
	}
	
	for(int i = 7; i >=2; i--){
			// so lan xuat phan tich tuong ung voi chu so can tim
			for(int j = 0; j < a[i]; j++){
				cout << i;
			}
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
