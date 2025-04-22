#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353
#define ll long long

void solve()
{
    ll n, k, x, sum = 0;
    cin >> n >> k >> x;

    vector<ll> a(n);
    for (auto &i : a)
    {
        cin >> i;
        sum += i;
    }

    ll res = sum * k;
    ll ans = 0;
    while (res >= x)
    {
        if (res - sum < x)
            break;
        res -= sum;
        ans += n;
    }
    if (res >= x)
    {
        for (ll i = 0; i < n; i++)
        {
            if (res >= x)
                ans++;
            else
                break;
            res -= a[i];
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
