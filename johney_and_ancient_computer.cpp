#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353
#define ll long long

void solve()
{
    ll a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << 0 << endl;
        return;
    }

    if (a < b)
        swap(a, b);

    if (a % b != 0)
    {
        cout << -1 << endl;
        return;
    }

    ll ratio = a / b;
    int ans = 0;

    while (ratio % 8 == 0)
    {
        ratio /= 8;
        ans++;
    }
    while (ratio % 4 == 0)
    {
        ratio /= 4;
        ans++;
    }
    while (ratio % 2 == 0)
    {
        ratio /= 2;
        ans++;
    }

    if (ratio != 1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
    }
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
