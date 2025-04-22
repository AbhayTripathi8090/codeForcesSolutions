#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> pos(1001, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            pos[a[i]] = max(pos[a[i]], i + 1);
        }

        int ans = -1;
        for (int x = 1; x <= 1000; x++)
        {
            if (pos[x] == 0)
                continue;
            for (int y = 1; y <= 1000; y++)
            {
                if (pos[y] == 0)
                    continue;
                if (__gcd(x, y) == 1)
                {
                    ans = max(ans, pos[x] + pos[y]);
                }
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
