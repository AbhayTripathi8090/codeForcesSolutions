#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353
#define ll long long

void solve()
{
    
    string str ;
    cin >> str ;
    ll ans = 0;

    for(ll i=str.size()-1;i>=0;i--){
        if(str[i] == '0'){
            ans++;
        }
        else{
            break;
        }
    }
    // ll i = str.size() - 1;
    // while (str[i] == '0')
    // {
    //     {
    //         ans++;
    //         i--;
    //     }
    // }
    ll countNonZero = 1LL * str.size() - 1LL * count(str.begin(), str.end(), '0');
    ll finalAns = ans + countNonZero - 1;
    cout << 1LL * finalAns << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
