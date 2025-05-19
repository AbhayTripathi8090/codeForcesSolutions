#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    ll n,k;
    cin>>n>>k;
    map<int,vector<int>>m;
    for(ll i=0;i<n;i++){
        int x;
        cin>>x;
        m[x].push_back(i);
    }
    int mi = INT_MAX;
    for(auto &i:m){
        i.second.push_back(n);
        int k = i.second.size();
        for(ll j=k-1;j>0;--j){
            i.second[j] = i.second[j]-i.second[j-1]-1;
        }
        sort(i.second.begin(),i.second.end());
        if(k>1){
            mi = min(mi,max(i.second[k-1]/2,i.second[k-2]));
        }else{
            mi = min(mi,i.second[k-1]/2);
        }
    }
    cout<<mi<<endl;
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
