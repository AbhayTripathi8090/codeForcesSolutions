#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> ans(n);
    ll value = 1;
    // ll index= k-1;
    for (int i = k - 1; i < n; i += k)
    {
        ans[i] = value;
        value++;
    }
    for (int i = 0; i < n; i++)
    {
        if (!ans[i])
        {
            ans[i] = value;
            value++;
        }
    }
    f(i, n) cout << ans[i] << " ";
    cout << endl;
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
