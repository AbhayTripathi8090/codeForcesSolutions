#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353
#define ll long long

void solve()
{
    ll w,h;
    cin>>w>>h;
    ll k1;
    cin>>k1;
    vector<ll>horizontalSide1(k1);
    for(auto &i:horizontalSide1)cin>>i;

    ll k2;
    cin>>k2;
    vector<ll>horizontalSide2(k2);
    for(auto &i:horizontalSide2)cin>>i;

    ll k3;
    cin>>k3;
    vector<ll>verticalSide1(k3);
    for(auto &i:verticalSide1)cin>>i;

    ll k4;
    cin>>k4;
    vector<ll>verticalSide2(k4);
    for(auto &i:verticalSide2)cin>>i;

    ll value1 = (horizontalSide1[k1-1]-horizontalSide1[0])*h;
    ll value2 = (horizontalSide2[k2-1]-horizontalSide2[0])*h;
    ll value3 = (verticalSide1[k3-1]-verticalSide1[0])*w;
    ll value4 = (verticalSide2[k4-1]-verticalSide2[0])*w;

    vector<ll>ans;
    ans.push_back(value1);
    ans.push_back(value2);
    ans.push_back(value3);
    ans.push_back(value4);

    sort(ans.begin(),ans.end());
    cout<<ans[ans.size()-1]<<endl;
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
