#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll t;
    cin >> t;
    cin.ignore(); 
    vector<string> crew(t), captain, man, womanChild, rat;
    for (ll i = 0; i < t; i++)
    {
        string s;
        getline(cin, s);
        
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                if (s.substr(i + 1, 3) == "rat")
                {
                    rat.push_back(s.substr(0, i));
                }
                if (s.substr(i + 1, 3) == "man")
                {
                    man.push_back(s.substr(0, i));
                }
                if (s.substr(i + 1, 7) == "captain")
                {
                    captain.push_back(s.substr(0, i));
                }
                if (s.substr(i + 1, 5) == "woman" || s.substr(i + 1, 5) == "child")
                {
                    womanChild.push_back(s.substr(0, i));
                }
            }
        }
    }

    for (auto i : rat)
        cout << i << endl;
    for (auto i : womanChild)
        cout << i << endl;
    for (auto i : man)
        cout << i << endl;
    for (auto i : captain)
        cout << i << endl;
}

int main()
{
    // ll t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    solve();
    return 0;
}
