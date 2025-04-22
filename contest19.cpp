
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    int n, k;
    cin >> n >> k;
    ll ans = 0;
    vector<int> v;

    vector<int> l(n), r(n);
    for (int i = 0; i < n; i++)
    {
        cin >> l[i];
        ans += l[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> r[i];
        ans += r[i];
    }

    for (int i = 0; i < n; i++)
    {
        v.push_back(min(l[i], r[i]));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n + 1 - k; i++)
    {
        ans -= v[i];
    }
    cout << ans + 1 << "\n";
}

int32_t main()
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
