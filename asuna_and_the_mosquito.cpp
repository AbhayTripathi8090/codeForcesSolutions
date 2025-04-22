
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n,countOdd=0,countEven=0;   
    cin>>n;
    vector<ll>t(n);
    for(auto &i:t){
        cin>>i;
        if(i&1)countOdd++;
        else countEven++;
    }
    if(countOdd == 0 || countEven == 0){
        cout<<*max_element(t.begin(),t.end())<<endl;
    }
    else{
        ll sum = accumulate(t.begin(),t.end(),0LL);
        cout<<sum-countOdd+1<<endl;
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
