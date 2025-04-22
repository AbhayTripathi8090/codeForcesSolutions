#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353
#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)
#define ia(a, n) \
	ll a[n];     \
	f(i, n) cin >> a[i]
#define iv(v, n)     \
	vector<ll> v(n); \
	f(i, n) cin >> v[i]


void solve()
{
    ll n;
    cin >> n;
    iv(v,n);
    unordered_map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        mp[v[i]]++;
    }
    for(auto i:mp){
        if(i.second>1){
            cout<<"YES"<<endl;
            return;
        }
        
    }
    cout<<"NO"<<endl;
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
