
#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    ll n;
    cin >> n;
    
    ll sum = (((__int128)n*(n+1)*(4ll*n-1)/6)%MOD*2022)%MOD;
    cout << sum << "\n";
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