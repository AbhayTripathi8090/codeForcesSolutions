
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;   
    cin>>n;
    string s;
    cin>>s;
    vector<int>ans;
    ll j=-1;
    for(ll i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            continue;
        }
        int x = i-j;
        int c = ans.size();
        for(ll ii = 0;ii<2*x;ii++){
            ans.push_back(i+c+1);
        }
        j=i;
    }
    if(j==-1){
        cout<<-1<<endl;
        return;
    }
    ll x = n-1-j;
    for(ll ii=0;ii<2*x;ii++){
        ans.push_back(n+ans.size()-x);
    }
    cout<<ans.size()<<endl;
    for(auto i:ans){
        cout<<i<<endl;
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
    return 0;
}
