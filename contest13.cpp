
#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    deque<ll> q[2];
	ll n = 0;
	ll numq;
	cin >> numq;
	ll sum = 0;
	bool rev = false;
	ll sum2 = 0;
	ll ans = 0;
 
	f(_, numq)
	{
		ll type;
		cin >> type;
		if (type == 1)
		{
			ll la = q[rev].back();
			sum2 -= 2 * (sum - la);
			sum2 += 2 * (n - 1) * la;
			ans += (sum - la);
			ans -= (n - 1) * la;
			q[rev].pop_back();
			q[rev].push_front(la);
			ll temp = q[!rev].front();
			q[!rev].pop_front();
			q[!rev].push_back(temp);
			cout << ans << endl;
		}
		else if (type == 2)
		{
			ans += sum2;
			sum2 = -sum2;
			rev = !rev;
			cout << ans << endl;
		}
		else
		{
			ll k;
			cin >> k;
			n++;
			q[rev].push_back(k);
			q[!rev].push_front(k);
			ans += n * k;
			sum2 += sum;
			sum2 += (1-n) * k;
			sum += k;
			cout << ans << endl;
		}
	}
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