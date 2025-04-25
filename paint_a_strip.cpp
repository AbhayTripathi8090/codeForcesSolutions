#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    int n, r = 1, ans = 2;
    cin >> n;
    while (r < n)
    {
        r *= 2;
        r += 2;
        ans++;
    }
    cout << ans - 1 << endl;
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
