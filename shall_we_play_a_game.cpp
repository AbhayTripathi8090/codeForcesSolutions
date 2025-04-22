#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353
#define ll long long 

void solve() {
    ll n;
    cin >> n;
    if(n%2){
        ll x = 1;
        for(ll i = 1;i<=n-1;i++){
            x %= MOD;
            x *= 2;
        }
        x %= MOD;
        cout << x << "\n";
    }else{
        ll x1 = 1,x2 = 1;
        for(ll i = 1;i<=n-2;i++){
            x1 %= MOD;
            x1 *= 2;
        }
        x1 %= MOD;
        for(ll i = 1;i<=n;i++){
            x2 %= MOD;
            x2 *= 2;
        }
        x2 %= MOD;
        cout<<(x2-x1)<<endl;
    }
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
