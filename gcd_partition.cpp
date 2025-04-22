
#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    ll n, ans = 1;
    cin >> n;
    vector<ll> a(n), p(n);
    f(i, n) cin >> a[i];
    p[0] = a[0];
    for (ll i = 1; i < n; i++)
    {
        p[i] = p[i - 1] + a[i];
    }
    ll sum = accumulate(a.begin(), a.end(), 0LL);
    f(i, n - 1)
    {
        ans = max(__gcd(p[i], abs(sum - p[i])), ans);
    }
    cout << ans << "\n";
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