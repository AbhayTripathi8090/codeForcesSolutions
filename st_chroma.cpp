#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> ans(n);
    if (n == x)
    {
        for (ll i = 0; i < n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    ans[n - 1] = x;
    ll value = 0, index;
    for (ll i = 0; i < n; i++)
    {
        if (value == x)
        {
            index = i;
            break;
        }
        else
        {
            ans[i] = value;
            value++;
        }
    }
    for (ll i = index; i < n - 1; i++)
    {
        ans[i] = x + 1;
        x++;
    }
    for (auto i : ans)
        cout << i << " ";
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
