#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    unordered_map<char, int> mp;
    for (auto i : s)
    {
        mp[i]++;
    }
    char maxChar,minChar;
    int maxi = 0,mini = 11;
    for (auto i : mp)
    {
        if (i.second > maxi)
        {
            maxi = i.second;
            maxChar = i.first;
        }
        if (i.second < mini)
        {
            mini = i.second;
            minChar = i.first;
        }
    }
    for(int i=0;i<n;i++){
        if(s[i] == minChar){
            s[i] = maxChar;
        }
    }
    // cout<<minChar<<" "<<maxChar;
    cout<<s<<endl;
    // cout<<endl;
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
