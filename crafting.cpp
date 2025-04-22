#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n,minusCount = 0;
    cin >> n;
    vector<ll>a(n),b(n),ans;
    for(auto &i:a)cin>>i;
    for(auto &i:b)cin>>i;
    for(ll i=0;i<n;i++){
        ans.push_back(a[i]-b[i]);
    }
    for(ll i=0;i<n;i++){
        if(ans[i]<0)minusCount++;
    }
    if(minusCount>1){
        cout<<"NO"<<endl;
        return;
    }else if(minusCount == 0){
        cout<<"YES"<<endl;
        return;
    }else if(minusCount == 1){
        sort(ans.begin(),ans.end());
        if(abs(ans[0]) <= ans[1]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // solve();
    return 0;
}
