#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll count1 = 0, count2 = 0,ans = 0;
    for (ll i = 0; i < n; i++){
        (s[i] == '(')?count1++:count2++;
        if(count1 < count2 && s[i] == ')'){
            ans++;
            count2--;
        }
    }
    cout << ans << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // solve();
    return 0;
}
