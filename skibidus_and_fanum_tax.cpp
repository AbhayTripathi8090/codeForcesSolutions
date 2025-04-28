#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1), b(m + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++)
        cin >> b[i];
    a[1] = min(a[1], b[1] - a[1]);
    for (int i = 2; i <= n; i++)
    {
        if (max(a[i], b[1] - a[i]) < a[i - 1])
        {
            cout << "NO" << endl;
            return;
        }
        else if (min(a[i], b[1] - a[i]) >= a[i - 1])
            a[i] = min(a[i], b[1] - a[i]);
        else
            a[i] = max(a[i], b[1] - a[i]);
    }
    cout << "YES" << endl;
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
