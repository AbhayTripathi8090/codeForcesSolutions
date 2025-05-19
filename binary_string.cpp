#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    ll n,ans;
    cin>>n;
    string s;
    cin>>s;
    (s[0] == '1')?ans = 1:ans=0;
    for(ll i=1;i<n;i++){
        if(s[i]!= s[i-1])ans++;
    }
    if(ans == 2)ans = 1;
    else if(ans>2)ans-=2;
    cout<<n+ans<<endl;
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
