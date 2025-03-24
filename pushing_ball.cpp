
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<string> grid(n);
    for (auto &i : grid)
        cin >> i;

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            //checking rows
            if (grid[i][j] == '0')
                continue;
            bool f = 1;
            for (ll k = 0; k < i; k++)
            {
                if (grid[k][j] == '0')
                {
                    f = 0;
                    break;
                }
            }
            if (f)
                continue;
            f = 1;
            //checking col
            for (ll k = 0; k < j; k++)
            {
                if (grid[i][k] == '0')
                {
                    f = 0;
                    break;
                }
            }
            if (f == 0)
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
