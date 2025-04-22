#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353
#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> s(n);
    for (auto &i : s)
    {
        cin >> i;
    }
    ll l = 1, r = 1e9;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            sum += (s[i] + 2 * mid) * (s[i] + 2 * mid);
            if (sum > k)
                break;
        }
        if (sum == k)
        {
            cout << mid << "\n";
            return;
        }
        else if (sum < k)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
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
