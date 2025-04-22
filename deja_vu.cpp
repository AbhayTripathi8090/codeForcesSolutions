#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353
#define ll long long

void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n), x(q);
    for (auto &i : a)
        cin >> i;
    for (auto &i : x)
        cin >> i;

    ll maxx = 31;
    for (ll i = 0; i < q; i++)
    {
        if (x[i] < maxx)
        {
            maxx = x[i];
            for (ll j = 0; j < n; j++)
            {
                if (a[j] % (1LL << maxx) == 0)
                {
                    a[j] += (1LL << (maxx - 1));
                }
            }
        }
    }

    for (auto &i : a)
        cout << i << " ";
    cout << endl;
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

