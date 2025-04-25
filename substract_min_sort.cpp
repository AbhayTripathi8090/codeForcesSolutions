#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    ll n, ans = 0;
    cin >> n;
    vector<ll> a(n);
    f(i, n) cin >> a[i];
    // f(i, n - 1)
    // {
    //     if (a[i] <= a[i + 1])
    //     {
    //         ans += 1;
    //     }
    //     else
    //     {
    //         ans += (-1);
    //     }
    // }
    // if (ans > 0)
    // {
    //     cout << "YES" << endl;
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }
    f(i,n-1){
        ll temp = min(a[i],a[i+1]);
        a[i] = a[i]-temp;
        a[i+1] = a[i+1]-temp;
        if(a[i]>a[i+1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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
