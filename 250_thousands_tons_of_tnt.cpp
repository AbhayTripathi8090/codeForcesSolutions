#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353
#define ll long long

void solve()
{
    ll n, ans = -1;
    cin >> n;
    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;
    for (ll i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            ll maxi = -1e18, mini = 1e18;
            for (ll j = 0; j < n; j += i)
            {
                ll tempSum = 0;
                for (ll k = j; k < j + i; k++)
                {
                    tempSum += a[k];
                }
                maxi = max(maxi, tempSum);
                mini = min(mini, tempSum);
            }
            ans = max(ans, maxi - mini);
            ;
        }
    }
    cout << ans << endl;
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
