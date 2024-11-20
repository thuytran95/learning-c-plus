#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 5;
int prime[N] = {0};

/*
2
1 10
5 10
*/

void sieve()
{
    prime[0] = 1, prime[1] = 1;
    for (int i = 2; i <= sqrt(N); i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j < N; j += i)
            {
                prime[j] = 1;
            }
        }
    }
}

void solve()
{
    int left;
    int right;
    cin >> left >> right;

    int count = 0;
    for (int i = left; i <= right; i++)
    {
        if (prime[i] == 0)
        {
            count++;
        }
    }

    cout << count << endl;
}

int main()
{
    int t;
    cin >> t;
    sieve();

    while (t--)
    {
        solve();
    }

    return 0;
}