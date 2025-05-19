#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

const int MOD = 998244353;
const int MAXN = 200005;

// Precompute factorials modulo MOD
vector<long long> factorial(MAXN);

void precompute_factorials() {
    factorial[0] = 1;
    for (int i = 1; i < MAXN; ++i)
        factorial[i] = (factorial[i - 1] * i) % MOD;
}

void solve()
{
    ll n;
    cin >> n;

    vector<ll>a(n);
    f(i,n)cin>>a[i];
    // ll cnt=0;
    bool flag = 0;
    for(ll i=0;i<n;i++){
        if((a[i] == i) || (a[i] == n-1-i)){
            cnt++;
        }
        else{
            cout<<0<<endl;
            return;
        }
    }
    cout<<factorial[cnt]<<endl;
}

int main()
{
    precompute_factorials(); 
    int T;
    cin >> T;

    while (T--)
    {
        solve();
    }

    return 0;
}
