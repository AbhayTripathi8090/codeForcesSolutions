
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin>>n;
    ll highest = log2(n-1);
    ll start = 1<<highest;
    // for(ll i=n-1;i>=start;i--)cout<<i<<" ";   
    // for(ll i=0;i<start;i++)cout<<i<<" ";  
    // cout<<endl;
    cout<<highest<<endl;
    cout<<start<<endl;
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
