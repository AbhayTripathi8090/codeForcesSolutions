
#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    ll n;
    cin >> n;
    vector<ll>a(n);
    vector<ll>ansVec;
    f(i,n)cin>>a[i];
    f(i,n){
        if(a[i] != i){
            ansVec.push_back(a[i]);
        }
    }
    f(i,n){
        if(a[i] != i){
            ansVec.push_back(a[i]);
        }
    }
    ll ans  = ansVec[0];
    f(i,ansVec.size()){
        ans = ans&ansVec[i];
    }
    cout << ans << "\n";
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