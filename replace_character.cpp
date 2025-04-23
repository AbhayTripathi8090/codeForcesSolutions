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

        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[s[i]]++;
        }
        vector<pair<int, char>> v;
        for (auto it : m)
        {
            v.push_back({it.second, it.first});
        }
        sort(v.begin(), v.end());
        // cout<<s.find(v[0].second)<<" ";
        // cout<<v.back().second<<endl;
        s[s.find(v[0].second)] = v.back().second;
        cout << s << endl;
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
