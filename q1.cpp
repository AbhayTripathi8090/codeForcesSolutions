#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    if(n&1){
        cout<<n<<" "<<1<<" ";
        for( ll i=2;i<=n-1;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else{
        cout << -1<<endl;
    }
    
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
