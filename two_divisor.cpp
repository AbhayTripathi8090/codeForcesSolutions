#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
   ll n;
   cin >> n;
   vector<ll>a(n);
   map<ll,ll>mp;
   for(auto &i:a){
    cin>>i;
    mp[i]++;
   }
   cout<<mp.size()<<endl;
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
