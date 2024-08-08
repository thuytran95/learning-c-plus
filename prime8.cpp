#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, p;
    cin >> n >> p;

    int x;
    while (n)
    {
        n /= p;
        x += n;
    }

    cout << x << endl;
}

int main()
{
    solve();
    return 0;
}