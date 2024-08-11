#include <bits/stdc++.h>
using namespace std;
#define MAX 100

/*
Input 1 2 3 4 5 6 7 8 9 
Output: 4 1 2 7 5 3 8 9 6 
Input: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 
Output: 5 1 2 3 9 10 6 4 13 11 7 8 14 15 16 12
*/

void out (int a[][MAX], int row, int col){
	int length = row * col;
	for(int i = 0;  i < length ; i++){
		cout << a[i / row][i % col] << " ";
		if((i + 1) % col == 0){
			cout << endl;
		}
	}
}

void solve(){
	int n, m;
	cin >> m >> n;
	int a[MAX][MAX];
	
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	
	int Row = m;
	int Col = n;
	
	int row = 0, col = 0;
	int prev, curr;
	
	/*
	row - starting row index
	m - ending row index
	col - starting column index
	n - ending column index
	i - iterator	
	*/
	
	while(row < m && col < n){
		if(row + 1 == m || col + 1 == n){
			break;
		}
		
		/* store the first element of next row
			this element will replace first element of the current	
		*/
		// row
		prev = a[row + 1][col];
		
		// Move element of first row from the remaing rows 
		for(int i = col; i < n; i++){
			curr = a[row][i];
			a[row][i] = prev;
			prev = curr;
		}
		
		cout << "row\t" << row << endl;
		out(a, Row, Col);
		
		row++;
	
		// Move element of the last column from the remaining columns
		for(int i = row; i < m; i++){
			curr = a[i][n-1];
			a[i][n-1] = prev;
			prev = curr;
		}
		cout << "move last remaning col" << endl;
		out(a, Row, Col);
		// vi cot dau tien vi 1 cot da move xong => co dinh lai cot
		n--;
		
		// Move element of last row from the remaining rows
		if(row < m){
			for(int i = n - 1; i >= col; i--){
				curr = a[m -1][i];
				a[m-1][i] = prev;
				prev = curr;
			}
		}
		cout << "Move element of last row from remaining rows"<< endl;
		out(a, Row, Col);
		// hang da move xong => co dinh lai hang
		m--; 
		
		// Move the element of first column from the remaining rows
		if(col < n){
			for(int i = m - 1; i >= row; i--){
				curr = a[i][col];
				a[i][col]= prev;
				prev = curr;
			}
		}
		cout << "Move element of first column from remaining rows"<< endl;
		out(a, Row, Col);
		col++;
	
	}
	
	// Print rotated matrix
	out(a, Row, Col);	
}

int main (){
	solve();
	
	return 0;
}
