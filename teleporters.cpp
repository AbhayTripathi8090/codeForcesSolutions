
#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    ll n, c, ans = 0;
    cin >> n >> c;
    vector<ll> a(n);
    f(i, n) cin >> a[i];
    f(i, n) a[i] = a[i] + (i + 1);
    sort(a.begin(), a.end());
    f(i, n)
    {
        // if (a[i] <= c)
        // {
        //     ans++;
        //     c -= a[i];
        // }
        // else{
        //     cout<<ans<<endl;
        //     return;
        // }
        if(a[i]>c)break;
        ++ans;
        c -= a[i];
    }
    cout<<ans<<endl;
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