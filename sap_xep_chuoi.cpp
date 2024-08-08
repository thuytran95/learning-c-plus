#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

/**
Rearrange the elements in the array so that when the numbers are concatenated,
we get the largest possible number.
Example: A[] {54, 546, 548, 60} => the largest number is 6054854654
*/

bool compare(int a, int b){
	ostringstream temp, temp2; // can convert ve string
	temp << a;	
	temp2 << b;
	string temp3 = 	temp.str();	
	string temp4 =	temp2.str();
	
	string ab = temp3 + temp4;
	string ba = temp4 + temp3;
	return ab > ba;
}


void xuatmang(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << "\t";
	}	
	cout << endl;
}

void sapxepkytutrongchuoi(string s){
	sort(s.begin(), s.end());
	cout <<"Chuoi sau sx: " << s << endl;
}

int main (){
	int numbers[] = {54, 546, 548, 60};
	int n = sizeof(numbers) / sizeof(numbers[0]);
	
	cout << "Before: ";
	xuatmang(numbers, n);
	
	// sort by decending	
	for(int i = 0; i < n; i++){
		sort(numbers, numbers + n, compare);
	}	
		
	cout << "After: ";
	xuatmang(numbers, n);	
	
	string str;
	cout << "Nhap chuoi: " << endl;
	getline(cin,str);
	sapxepkytutrongchuoi(str);
	return 0;
}
