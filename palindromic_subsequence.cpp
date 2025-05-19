#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    ll n;
    cin >> n;
    if(n == 6){
        cout<<"1 1 2 3 1 2"<<endl;
        return;
    }
    else{
        for(ll i=1;i<=n-2;++i){
            cout<<i<<" ";
        }
        cout<<"1 2"<<endl;
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
