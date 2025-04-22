#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long



void solve()
{
    ll n,res=0,gcdEven=0,gcdOdd=0;
    cin >> n;
    vector<ll>a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        if(i%2 == 0){
            gcdEven = __gcd(gcdEven,a[i]);
        }
        else{
            gcdOdd = __gcd(gcdOdd,a[i]);
        }
    }
    bool flag = true;
    for(ll i=0;i<n;i+=2){
        if(a[i]%gcdOdd == 0){
            flag = false;
        }
    }
    if(flag){
        res = gcdOdd;
    }
    flag = true;
    for(ll i=1;i<n;i+=2){
        if(a[i]%gcdEven == 0){
            flag = false;
        }
    }
    if(flag){
        res = gcdEven;
    }
    cout << res << endl;
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
