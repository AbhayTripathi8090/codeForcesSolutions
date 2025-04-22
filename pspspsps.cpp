#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353
#define ll long long

void solve()
{
    int n, a = -1, b = -1;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; ++i)
        if (s[i] == 's')
            a = i;
    for (int i = n - 1; i >= 0; --i)
        if (s[i] == 'p')
            b = i;
    if (a == -1 || b == -1 || a == 0 || b == n - 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
