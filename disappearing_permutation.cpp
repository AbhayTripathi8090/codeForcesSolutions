#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> p(n + 1);
    for (ll i = 1; i <= n; i++) {
        cin >> p[i];
    }
    
    vector<ll> grp(n + 1, -1);
    ll k = 1;

    // Finding the cycles in the permutation
    for (ll i = 1; i <= n; i++) {
        if (grp[i] != -1) continue;
        ll j = i;
        while (grp[j] == -1) {
            grp[j] = k;
            j = p[j];
        }
        k++;
    }

    vector<bool> chk(k + 1, 0);
    vector<ll> sz(k + 1, 0);

    // Counting the size of each cycle
    for (ll i = 1; i <= n; i++) {
        sz[grp[i]]++;
    }

    ll ans = 0;

    for (ll i = 0; i < n; i++) {
        ll d;
        cin >> d;
        if (!chk[grp[d]]) {
            ans += sz[grp[d]];
            chk[grp[d]] = 1;
        }
        cout << ans << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
