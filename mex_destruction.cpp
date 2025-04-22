#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), v;
    for (auto &i : a)
        cin >> i;
    ll count0 = count(a.begin(), a.end(), 0);
    if (count0 == n)
    {
        cout << 0 << endl;
        return;
    }
    else if (count0 == 0)
    {
        cout << 1 << endl;
        return;
    }
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            if (cnt)
            {
                v.push_back(cnt);
            }
            cnt = 0;
        }
        else
        {
            cnt++;
        }
    }
    if (cnt)
    {
        v.push_back(cnt);
    }
    (v.size() > 1) ? cout << 2 << endl : cout << 1 << endl;
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
