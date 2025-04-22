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
    ll a,b,count,ans = INT_MAX;
    cin>>a>>b;
    for(ll i=0;i*i<=a;i++){
        if(b ==1 and i == 0)
            continue;
        count = i;

        ll c= a;
        while(c){
            c /= (b+i);
            count++;
        }
        ans = min(ans,count);
    }
    cout<<ans<<endl;
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
