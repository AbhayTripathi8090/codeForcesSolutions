#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    ll n, q;
    cin >> n >> q;

    vector<ll> a(n);
    vector<ll> query(q);

    f(i, n) cin >> a[i];
    f(i, q) cin >> query[i];

    for (ll i = 0; i < q; i++)
    {

        
        ll p = find(a.begin(), a.end(), query[i]) - a.begin();
        cout << p + 1 << " ";
        rotate(a.begin(), a.begin() + p, a.begin() + p + 1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;
    // while (t--)
    // {
        solve();
    // }

    return 0;
}
