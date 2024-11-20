#include <bits/stdc++.h>
#include <math.h>
using namespace std;

void solve (){
    int n, k;
    cin >> n >> k;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }


    int cnt = 1;
    int res = a[0];
    vector<int> temp;
    
    for(int i = 1; i < n; i++){
        if(res < k){
            res += a[i];
            cnt++;
        }
        temp.push_back(cnt);
    }

    for(int i = 0; i < temp.size(); i++){
        cout << temp[i] << " ";
    }

   



    

}

int main (){
    solve();

    return 0;
}