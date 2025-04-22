#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353
#define ll long long

void solve()
{
    int n, x;
    long long sum = 0;
    cin >> n >> x;
    vector<long long> v(n + 1), pre(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for (int i = 1; i <= n; i++)
    {
        sum += v[i];
        pre[i] = sum;
    }
    sum = 0;
    long long val = 0, l = 0, h = n - x, mx = INT_MIN;
    for (int i = 0; i <= x; i++)
    {
        val = pre[h] - pre[l];
        mx = max(mx, val);
        l += 2, h++;
    }
    cout << mx << endl;
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
