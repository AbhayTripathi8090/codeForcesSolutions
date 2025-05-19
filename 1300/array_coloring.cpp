#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;

    if (k == 1)
    {
        ll finalAns = LLONG_MIN;

        ll max1 = *max_element(a.begin(), a.end() - 1); 
        finalAns = max(finalAns, max1 + a[n - 1]);

        ll max2 = *max_element(a.begin() + 1, a.end()); 
        finalAns = max(finalAns, max2 + a[0]);
        

        cout << finalAns << endl;
        return;
    }

    sort(a.begin(), a.end());
    ll ans = 0;
    ll p = n - 1;
    k++;

    while (k-- && p >= 0)
    {
        ans += a[p];
        p--;
    }

    cout << ans << endl;
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
