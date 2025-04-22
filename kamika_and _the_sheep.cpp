
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;   
    cin>>n;
    vector<ll>t(n);
    for(auto &i:t)cin>>i;
    ll maxi = *max_element(t.begin(),t.end());
    ll mini = *min_element(t.begin(),t.end());
    cout<<maxi-mini<<endl;
    // sort(t.rbegin(),t.rend());
    // for(auto &i:t)cout<<i<<" ";
    // cout<<endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
