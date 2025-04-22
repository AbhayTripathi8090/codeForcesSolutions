#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)
bool checker(vector<ll> b,ll s,ll e,ll toRemove){
    bool finals = true;
    while(s<=e){
        if(b[s]!=b[e]){
            if(b[s]==toRemove) s++;
            else if(b[e] == toRemove)e--;
            else{
                finals = false;
                break;
            }
        }
        else s++,e--;
    }
    return finals;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> b(n);
    f(i, n)
    {
        cin >> b[i];
    }
    bool finals = true;
    ll s = 0,e =n-1;
    bool first = false,second = false,once = false;
    while(s<=e){
        if(b[s]!=b[e]){
            first = checker(b,s+1,e,b[s]);
            second = checker(b,s,e-1,b[e]);
            once = true;
            break;
        }
        else{
            s++;
            e--;
        }
    }
    (first||second||!once)?cout<<"YES"<<endl:cout<<"NO"<<endl;
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
