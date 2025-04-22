#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353
#define ll long long

void solve()
{
    string a, b;
    cin >> a >> b;
    ll maxi = 0, n = a.size(), m = b.size();
    for (ll i = 0; i < n; i++) {
        for (ll j = i; j < n; j++) {
            string temp = a.substr(i, j - i + 1);
            if (b.find(temp) != string::npos) {
                maxi = max(maxi, (ll)temp.length());
            }
        }
    }
    cout << n + m - 2 * maxi << endl;
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
