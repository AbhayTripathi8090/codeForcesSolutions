#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    ll n;
    cin >> n;
    vector<ll> b(n);
    f(i, n)
    {
        cin >> b[i];
    }
    reverse(b.begin(), b.end());

    int ans = 0, x = 1;

    while (x < n)
    {
        if (b[x] != b[0])
        {
            ans++;
            x *= 2;
        }
        else
        {
            x++;
        }
    }

    cout << ans << '\n';
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
