
#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    string s;
    cin >> s;
    set<char> mySet;
    for (auto i : s)
    {
        mySet.insert(i);
    }
    bool knight = true;
    f(i, s.size())
    {
        if (s[i] != s[i % (mySet.size())])
            knight = false;
    }
    (knight) ? cout << "YES" << endl : cout << "NO" << endl;
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