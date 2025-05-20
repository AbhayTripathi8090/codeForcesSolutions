#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    ll n, k,cnt=0;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;

    if(k<n){
        for(int i=1;i<=n-k+1;i++){
            if(a[i]!=1){
                cout<<1<<endl;
                return;
            }
        }
        cout<<2<<endl;
        return;
    }
    else{
        for(int i=1;i<n;i+=2){
            cnt++;
            if(a[i]!=cnt){
                cout<<cnt<<endl;
                return;
            }
        }
        cnt++;
        cout<<cnt++<<endl;
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
