#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long



void solve()
{
    ll n;
    cin >> n;
    vector<ll>a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(),a.end());
    ll ans = 1;
    if(n ==1 and a[0]!=1){
        cout<<"NO"<<endl;
        return;
    }
    for(ll i=1;i<n;i++){
        if(a[i]<=ans){
            ans += a[i];
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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
