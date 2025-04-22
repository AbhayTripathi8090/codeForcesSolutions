#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    // ll n;
    // cin >> n;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    if (s[0] == s[s.size() - 1])
    {
        cout << "-1\n";
        return;
    }

    
    cout << s << "\n";
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
