#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

// void solve()
// {
//     ll n,k,ans=0;
//     cin>>n>>k;
//     string s;
//     cin>>s;
//     ll freq[52]={0};
//     for(auto i:s){
//         freq[i-'a']++;
//     }
//     ll anotherTemp = 0;
//     for(ll i=0;i<26;i++){
//         ans += min(freq[97+i],freq[65+i]);
//         ll temp = abs(freq[97+i]-freq[65+i]);
//         anotherTemp += (temp/2);
//     }
//     ans += min(anotherTemp,k);
//     cout<<ans<<endl;
// }

void solve()
{
    ll n, k, ans = 0;
    cin >> n >> k;
    string s;
    cin >> s;

    ll freq[52] = {0};
    for (char i : s)
    {
        if (isupper(i))
            freq[i - 'A']++;
        else
            freq[i - 'a' + 26]++;
    }

    ll anotherTemp = 0;
    for (ll i = 0; i < 26; i++)
    {
        ll lower = freq[i + 26]; // a–z
        ll upper = freq[i];      // A–Z
        ans += min(lower, upper);

        ll temp = abs(lower - upper);
        anotherTemp += (temp / 2);
    }

    ans += min(anotherTemp, k);
    cout << ans << endl;
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
