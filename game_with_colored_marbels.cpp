#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    ll n, scoreAlice;
    bool flag = true;
    cin >> n;
    vector<ll> a(n);
    f(i, n) cin >> a[i];
    map<ll, ll> mp;
    f(i, n) mp[a[i]]++;
    ll value1=0,value2=0;
    for(auto i:mp){
        if(i.second == 1){
            value1++;
        }
        else{
            value2++;
        }
    }
    scoreAlice = ((value1+1)/2)*2 + value2;
    cout << scoreAlice << endl;
    
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
