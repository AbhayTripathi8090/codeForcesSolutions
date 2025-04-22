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
    ll n,m,k;
    cin>>n>>m>>k;
    ll l = 0,h = n;
    while(l<h){
        ll mid = (l+h+1)/2;
        if((n/max(k,mid))>m || n%max(k,mid)>=mid && n/max(k,mid) == m){
            l = mid;
        }
        else{
            h = mid -1;
        }
    }
    vector<ll>ans(n,1e9);
    for(ll i=0;i<l;i++){
        for(ll j=i;j<n;j+=max(k,l)){
            ans[j] = i;
        }
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<"\n";
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
