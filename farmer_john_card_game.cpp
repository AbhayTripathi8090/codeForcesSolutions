#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> ans;
    vector<vector<ll>> cow(n, vector<ll>(m));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> cow[i][j];
        }
    }
    if (m == 1)
    {

        for (ll i = 0; i < n; i++)
        {
            ans.push_back({cow[i][0], i + 1});
        }
        sort(ans.begin(), ans.end());
        for (auto i : ans)
        {
            cout << i.second << " ";
        }
        cout << endl;
    }
    else
    {
        for (ll i = 0; i < n; i++)
        {
            sort(cow[i].begin(), cow[i].end());
        }
        ll temp = cow[0][1] - cow[0][0];

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 1; j < m; j++)
            {
                if ((cow[i][j] - cow[i][j-1]) != n)
                {
                    cout << -1 << endl;
                    return;
                }
            }
        }
        for (ll i = 0; i < n; i++)
        {
            ans.push_back({cow[i][0], i + 1});
        }
        sort(ans.begin(), ans.end());
        for (auto i : ans)
        {
            cout << i.second << " ";
        }
        cout << endl;
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // solve();
    return 0;
}
