
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n,l,r,ans = 0;
    cin>>n>>l>>r;
    vector<ll>a(n);
    for(auto &i:a)cin>>i;
    sort(a.begin(),a.end());
    for(ll i=0;i<(r-l+1);i++){
        ans += a[i];
    }
    cout<<ans<<endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
