#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (ll &x : a)
        cin >> x;

    sort(a.begin(),a.end());
    ll g=0;
    for(ll i=1;i<n;i++){
        if(a[i]%a[0] == 0){
            g = __gcd(g,a[i]);
        }
    }
    if(a[0] == g){
        cout << "Yes\n";
    }
    else{
        cout<<"No\n";
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
