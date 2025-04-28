#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    //answer - 1

    // ll a, b, c;
    // cin >> a >> b >> c;

    // ll sum = a + b + c;

    // if (sum % 3 == 0)
    // {
    //     ll avg = sum / 3;
    //     if (avg >= a && avg >= b)
    //     {
    //         cout << "YES\n";
    //     }
    //     else
    //     {
    //         cout << "NO\n";
    //     }
    // }
    // else
    // {
    //     cout << "NO\n";
    // }

    //answer - 2

    // int n;
    // cin >> n;
    // vector<ll> a(n), temp(n), suffix(n);
    // for (int i = 0; i < n; i++)
    //     cin >> a[i];
    // if(n == 1){
    //     cout<<a[0]<<endl;
    //     return;
    // }
    // temp[0] = a[0];
    // for (ll i = 1; i < n; i++)
    // {
    //     if (temp[i - 1] > a[i])
    //     {
    //         temp[i] = temp[i - 1];
    //     }
    //     else
    //     {
    //         temp[i] = a[i];
    //     }
    // }
    // // for(auto i:temp)cout<<i<<" ";
    // // cout<<endl;
    // suffix[n - 1] = a[n - 1];
    // for (ll i = n - 2; i >= 0; --i)
    // {
    //     suffix[i] = a[i] + suffix[i + 1];
    // }

    // // for (auto i : suffix)
    // //     cout << i << " ";
    // // cout << endl;
    // cout<<max(temp[n-1],suffix[n-1]);
    // cout<<" ";
    // for(ll i=n-1;i>=2;i--){
    //     cout<<suffix[i]+temp[i-1]<<" ";
    // }
    // cout<<suffix[0];
    // cout<<endl;
    // ll n;
    // cin >> n;
    // string s;
    // cin >> s;
    // ll countA = count(s.begin(), s.end(), 'A');
    // ll countB = count(s.begin(), s.end(), 'B');
    // if (n == 2 && s[0] == 'A')
    // {
    //     cout << "Alice" << endl;
    //     return;
    // }
    // if (s[0] == s[n - 1])
    // {
    //     if (s[0] == 'A')
    //     {
    //         cout << "Alice" << endl;
    //         return;
    //     }
    //     else
    //     {
    //         cout << "Bob" << endl;
    //         return;
    //     }
    // }
    // if (countA == countB && countA == 2)
    // {

    //     cout << "Bob" << endl;
    //     return;
    // }
    // if (countA == countB && countA > 2)
    // {
    //     ll cnt = 0;
    //     for (ll i = 0; i < n - 1; i++)
    //     {
    //         if (s[i] != s[i + 1])
    //         {
    //             cnt++;
    //         }
    //     }
    //     if (cnt == 1)
    //     {
    //         (s[n - 1] == 'A') ? cout << "Alice" << endl : cout << "Bob" << endl;
    //         return;
    //     }
    //     else
    //     {
    //         (countA > countB) ? cout << "Alice" << endl : cout << "Bob" << endl;
    //         return;
    //     }
        
    // }
    // (countA > countB) ? cout << "Alice" << endl : cout << "Bob" << endl;
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
