
#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    ll n,countNegative = 0;
    bool zero = false;
    cin >> n;
    vector<ll> a(n);
    f(i, n) cin >> a[i];
    ll ans=0;
    ll mini = INT_MAX;
    f(i,n){
        if(abs(a[i])<mini){
            mini = abs(a[i]);
        }
        if(a[i] == 0){
            zero = true;
        }
        if(a[i]<0){
            countNegative++;
        }
        ans+=abs(a[i]);
    }
    if(zero){
        cout<<ans<<endl;
        return;
    }
    if(countNegative%2 == 1){
        cout<<ans-2*abs(mini)<<endl;
        return;
    }
    cout<<ans<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}