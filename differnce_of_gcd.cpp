
#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    ll n,l,r;
    cin >> n>>l>>r;
    vector<ll>ans;
    ll cnt = 1;
    ans.push_back(l);
    for(ll i=2;i<=n;i++){
        if(l%i == 0){
            ans.push_back(l);
            cnt++;
        }else{
            ll j = l/i;
            ll num = (j+1)*i;
            if(num<=r){
                ans.push_back(num);
                cnt++;
            }
            else{
                cout << "NO\n";
                return;
            }
        }
    }
    if(cnt == n){
        cout << "YES\n";
        for(auto i:ans){
            cout << i << " ";
        }
        cout << "\n";
    }
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