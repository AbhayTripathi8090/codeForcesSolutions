#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n), cntArr;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll l = n, cnt = 1;
    for (ll i = n - 1; i >= 0; i--)
    {
        while (l - 1 >= 0 && a[l - 1] > b[i])
        {
            l--;
        }
        cntArr.push_back(n - l);
    }

    for (ll i = 1; i < cntArr.size(); i++)
    {
        cntArr[i] = cntArr[i] - i;
        if (cntArr[i] < 0)
            cntArr[i] = 0;
    }

    ll ans = 1;
    for (ll i = 0; i < cntArr.size(); i++)
    {
        ans = (ans * cntArr[i]) % MOD;
    }

    cout << ans << endl;
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
