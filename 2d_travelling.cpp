#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353
#define ll long long

void solve()
{
    ll n,k,a,b,price,priceA=LLONG_MAX/2,priceB=LLONG_MAX/2;
    cin>>n>>k>>a>>b;
    vector<ll>x(n+1),y(n+1);
    for(ll i=1;i<=n;i++){
        cin>>x[i]>>y[i];
    }
    price = abs(x[a]-x[b]) + abs(y[a]-y[b]);
    for(ll i=1;i<=k;i++){
        priceA = min(priceA,abs(x[a]-x[i])+abs(y[a]-y[i]));
        priceB = min(priceB,abs(x[b]-x[i])+abs(y[b]-y[i]));
    }
    cout<<min(price,priceA+priceB)<<endl;
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
