#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;
    ll sum = accumulate(a.begin(), a.end(), 0);
    sort(a.begin(), a.end());
    a[n - 1]--;
    sort(a.begin(), a.end());

    if (((a[n-1]) - a[0]) > (k))
    {
        cout << "Jerry" << endl;
        return;
    }

    if (sum & 1)
    {
        cout << "Tom" << endl;
    }
    else
    {
        cout << "Jerry" << endl;
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