#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353
#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)
#define ia(a, n) \
	ll a[n];     \
	f(i, n) cin >> a[i]
#define iv(v, n)     \
	vector<ll> v(n); \
	f(i, n) cin >> v[i]

void solve()
{
    ll n;
    cin>>n;
    ia(a, n);
	ia(b, n);
	ll g[n], h[n];
    f(i, n){
        a[i]--;
        b[i]--;
        g[a[i]] = b[i];
        h[b[i]] = a[i];
    }
    f(i,n){
        if(g[g[i]]!=i){
            cout<<-1<<endl;
            return;
        }
    }
    vector<ll>fin(n,-1);
    ll cnt = 0;

    ll ai[n];
    f(i,n){
        ai[a[i]]=i;
    }
    ll co = 0;
    f(i,n){
        if(a[i] == b[i]){
            co++;
        }
    }
    if(co != n%2){
        cout<<-1<<endl;
        return;
    }
    if(n&1){
        f(i,n){
            if(a[i] == b[i]){
                fin[i] = n/2;
            }
        }
    }
    f(i,n){
        if(fin[i] == -1){
            fin[i] = cnt++;
            fin[ai[g[a[i]]]] = n-cnt;
            if((n&1)&& cnt == n/2)cnt++;
        }
    }
    ll fi[n];
    f(i,n){
        fi[fin[i]] = i;
    }
    vector<pair<ll,ll>>ans;
    f(i,n){
        ll idx = fi[i];
        swap(fin[i],fin[idx]);
        fi[fin[i]] = i;
        fi[fin[idx]] = idx;
        if(i != idx){
            ans.push_back({i,idx});
        }
    }
    cout<<ans.size()<<endl;
    for(auto x:ans){
        cout<<x.first+1<<" "<<x.second+1<<endl;
    }
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
