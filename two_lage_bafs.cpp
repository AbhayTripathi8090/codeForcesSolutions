#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v;
    set<ll> s;
    map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        m[a]++;
        s.insert(a);
        v.push_back(a);
    }
    while (!s.empty())
    {
        ll mn = *s.begin();
        if (m[mn] == 1)
        {
            cout << "No" << endl;
            return;
        }
        m[mn + 1] += m[mn] - 2;
        s.erase(mn);
        if (m[mn + 1])
        {
            s.insert(mn + 1);
        }
        m[mn] = 0;
    }
    cout << "Yes" << endl;
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
