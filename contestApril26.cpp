
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;

//         vector<int> cnt(10, 0);
//         for (char c : s)
//         {
//             cnt[c - '0']++;
//         }

//         string ans = "";
//         for (int i = 0; i < 10; ++i)
//         {

//             int need = 9 - i;
//             for (int d = 0; d <= 9; ++d)
//             {
//                 if (cnt[d] > 0 && d >= need)
//                 {
//                     ans += (d + '0');
//                     cnt[d]--;
//                     break;
//                 }
//             }
//         }

//         cout << ans << '\n';
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    f(i,n)cin>>a[i];
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

