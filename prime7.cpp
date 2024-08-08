#include <bits/stdc++.h>
using namespace std;

void solve () {
    int n;
    cin >> n;

    // 
    int count = 0, count1= 0;
    for(int i = 2; i <= n; i++){
        if(n % i == 0) count++;
     
        //  lap cho den khi khong chia het dk nua
        while(n % i == 0){ 
            count1++;
            n /= i;
        }     
    }

    if(count == count1 && count == 3) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;

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