#include <bits/stdc++.h>
#include <math.h>

using namespace std;


long long lcm (int a, int b){
	return a  * b / __gcd(a, b);
}

int countdigit (long long n){
	int dem = 0;
	while (n > 0){
		n = n / 10;
		dem++;
	}
	
	return dem;
}

void solve (){
	int n, x, y, z;
	cin >> x >> y >> z >> n;
	long long bcnn =  lcm(x, lcm(y, z));	
	long long min = pow(10, n - 1);
	long long max = pow(10, n);
	if(max < bcnn) {
		cout << -1 << endl;
		return;
	}
	
	if(min % bcnn == 0){
		cout << min << endl;
	} else {
		cout << (min / bcnn + 1) * bcnn << endl;
	}
}

int main (){
	int t;
	cin >> t;

	while(t--){
		solve();
	}
	
	
	return 0;
}
