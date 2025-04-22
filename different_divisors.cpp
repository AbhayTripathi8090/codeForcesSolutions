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
bool isPrime(ll i){
    for(ll j=2;j*j<=i;j++){
        if(i%j == 0){
            return false;
        }
    }
    return true;
}


ll nextPrime(ll x){
    //smallest prime >=x
    for(ll i=x;;i++){
        if(isPrime(i)){
            return i;
        }
    }
    return -1;
}

void solve()
{
    ll d;
    cin >> d;
    
    ll p  = nextPrime(d+1);
    ll q  = nextPrime(d+p);

    cout<<min(1LL*p*p*p,1LL*p*q)<<endl;
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
