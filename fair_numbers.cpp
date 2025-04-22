#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353
#define ll long long

bool fair(ll n) {
    string x = to_string(n);
    for (ll i = 0; i < x.length(); i++) {
        if (x[i] != '0' && n % (x[i] - '0') != 0) {
            return false;
        }
    }
    return true;
}

void solve() {
    ll n;
    cin >> n;
    while (!fair(n)) {
        n++;
    }
    cout << n << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
