
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    ll n,l,r;
	cin >> n >> l >> r;
	l--, r--;
    vector<ll>a(n);
	for(auto &i:a)cin>>i;
	vector<ll> b,c;
	for(ll i = l; i < n; i++) {
		b.push_back(a[i]);
	}
	for(ll i = 0; i <= r; i++) {
		c.push_back(a[i]);
	}
	sort(b.begin(), b.end());
	sort(c.begin(), c.end());
 
	ll sum1 = accumulate(b.begin(), b.begin() + (int)(r-l+1), 0LL);
	ll sum2 = accumulate(c.begin(), c.begin() + (int)(r-l+1), 0LL);
 
	cout << min(sum1, sum2) << endl;
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
