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
    pair<ll,ll>arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i].first;
        arr[i].second=i;
    }
    sort(arr,arr+n);
    ll time = 0;
    ll ans[n];
    ll idx = 1;
    for(ll i=n-1;i>=0;i-=2){
        ll temp = 2*idx;
        time = time +(arr[i].first)*temp;
        ans[arr[i].second] = idx;
        idx++;
    }
    idx = -1;
    for(ll i=n-2;i>=0;i-=2){
        ll temp = 2*abs(idx);
        time = time +(arr[i].first)*temp;
        ans[arr[i].second] = idx;
        idx--;
    }
    cout<<time<<endl;
    cout<<0<<" ";
    for(ll i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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
