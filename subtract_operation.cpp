#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    f(i,n){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    bool ans = false;
    ll l = 0,r=1;
    while(l<n && r<n){
        if(a[r]-a[l]==k){
            ans = true;
            break;
        }
        else if(a[r]-a[l]<k){
            r++;
        }
        else{
            l++;
        }
    }
    ans?cout<<"YES"<<endl:cout<<"NO"<<endl;
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
