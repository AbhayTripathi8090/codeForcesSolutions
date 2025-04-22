#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    string a, b, modifiedA, modifiedB;
    cin >> a >> b;

    for (ll i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            modifiedA.push_back(a[i]);
            modifiedB.push_back(b[i]);
        }
        else
        {
            modifiedA.push_back(b[i]);
            modifiedB.push_back(a[i]);
        }
    }

    ll countA1 = count(modifiedA.begin(), modifiedA.end(), '0');
    ll countA2 = count(modifiedB.begin(), modifiedB.end(), '0');

    if (countA1 >= ((n+1) / 2) && countA2 >= (n / 2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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
