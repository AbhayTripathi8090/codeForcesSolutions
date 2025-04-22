#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), evenpos, oddpos;
    for (auto i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i & 1)
            oddpos.push_back(a[i]);
        else
            evenpos.push_back(a[i]);
    }

    ll oddSum = accumulate(oddpos.begin(), oddpos.end(), 0LL);
    ll evenSum = accumulate(evenpos.begin(), evenpos.end(), 0LL);

    (oddSum / oddpos.size() == evenSum / evenpos.size() && oddSum % oddpos.size() == 0 && evenSum % evenpos.size() == 0

     )
        ? cout << "YES" << endl
        : cout << "NO" << endl;
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
