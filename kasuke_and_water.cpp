#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
 
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int mn = 0;
        for (int j = 0; j < n - i; j++) {
            mn = min(mn, a[i + j][j]);
        }
        ans += max(0, -mn);
    } // O(n^2)
    for (int j = 1; j < n; j++) {
        int mn = 0;
        for (int i = 0; i < n - j; i++) {
            mn = min(mn, a[i][j + i]);
        }
        ans += max(0, -mn);
    } // O(n^2)
 
    cout << ans << '\n';
    
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
