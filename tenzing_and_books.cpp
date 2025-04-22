#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353
#define ll long long

void solve()
{
    ll n,x;
    cin >> n>>x;
    vector<ll>first(n),second(n),third(n);
    for(int i = n-1; i >=0; i--)cin>>first[i];
    for(int i = n-1; i >=0; i--)cin>>second[i];
    for(int i = n-1; i >=0; i--)cin>>third[i];
    int temp  = 0;
    bool flag = false;
    while(true){
        int cnt = 0;
        if(first.size()){
            if((x|first[first.size()-1])==x){
                temp = (temp|first[first.size()-1]);
                first.pop_back();
                if(temp == x){
                    flag = true;
                    break;
                }
                cnt++;
            }
        }
        if(second.size()){
            if((x|second[second.size()-1])==x){
                temp = (temp|second[second.size()-1]);
                second.pop_back();
                if(temp == x){
                    flag = true;
                    break;
                }
                cnt++;
            }
        }
        if(third.size()){
            if((x|third[third.size()-1])==x){
                temp = (temp|third[third.size()-1]);
                third.pop_back();
                if(temp == x){
                    flag = true;
                    break;
                }
                cnt++;
            }
        }
        if(cnt == 0)break;
    }
    if(x == 0)flag = true;
    cout << (flag ? "YES" : "NO") << endl;
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
