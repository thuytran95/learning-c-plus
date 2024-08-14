#include <bits/stdc++.h>
using namespace std;
/*
11 4
2 1 2 5 7 1 9 3 6 8 8
2 1 8 3

output
2 2 1 1 8 8 3 3 5 6 7 9
*/

void solve()
{
    int n, m;
    cin >> n >> m;

    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }

    int totalSame = 0;
    sort(a, a + n);

    for (int i = 0; i < m; i++)
    {
        bool check = false;
        cout << b[i] << " ";

        for (int j = 0; j < n; j++)
        {
            if (a[j] < b[i])
                continue;
            if (a[j] > b[i])
                break;

            check = true;
            a[j] = 0;
            totalSame++;
        }

        if (check)
        {
            cout << b[i] << " ";
        }
    }

    sort(a, a + n);
    for (int i = totalSame; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
}

int main()
{
    solve();

    return 0;
}