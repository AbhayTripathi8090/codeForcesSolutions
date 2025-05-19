#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    ll n, m, ans = 0;
    cin >> n >> m;
    vector<vector<ll>> mat(n, vector<ll>(m));
    for (ll i = 0; i < n; ++i)
    {
        for (ll j = 0; j < m; ++j)
        {
            cin>>mat[i][j];
        }
    }
    // ll ans = 0;
    for (ll j = 0; j < m; ++j)
    {
        vector<ll> col;
        for (ll i = 0; i < n; ++i)
        {
            col.push_back(mat[i][j]);
        }
        sort(col.begin(),col.end());
        ll p = 0;
        for(ll i=0;i<n;++i){
            ans += col[i]*i - p;
            p += col[i];
        }
    }
    cout<<ans<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
