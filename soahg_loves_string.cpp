#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    string s;
    cin>>s;
    int n = s.size();
    if(s.size()<2){
        cout<<-1<<endl;
        return;
    }
    if(s.size()==2 && s[0] != s[1]){
        cout<<-1<<endl;
        return;
    }
    for(int i=0;i<n-1;++i){
        if(s[i] == s[i+1]){
            cout<<s[i]<<s[i+1]<<endl;
            return;
        }
    }
    for(int i=1;i<n-1;++i){
        if((s[i] != s[i+1] )&& (s[i] != s[i+1]) && (s[i-1]!= s[i+1])){
            cout<<s[i-1]<<s[i]<<s[i+1]<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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
