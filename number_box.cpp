#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353
#define ll long long

void solve()
{
    ll n, m, neg = 0, sum = 0, mi = INT_MAX;
    cin >> n >> m;
    vector<vector<ll>> num(n, vector<ll>(m));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> num[i][j];
            sum += abs(num[i][j]);
            mi = min(mi, abs(num[i][j]));
            if (num[i][j] < 0)
                neg++;
        }
    }
    if (mi == 0 || (neg % 2 == 0))
    {
        cout << sum << endl;
    }
    else
    {
        cout << sum - 2 * mi << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
