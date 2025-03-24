
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;   
    cin>>n;
    vector<ll>t(n);
    for(auto &i:t)cin>>i;
    set<vector<ll>>pq0,pq1;
    set<pair<ll,ll>>st;

    auto push = [&](int X,int Y){
        if(st.find({X,Y})!=st.end())
        return;
        pq0.insert({3*X+3*Y+2,X,Y});

        pq1.insert({3*X+3*Y+2,3*X+1,3*Y+1});
        pq1.insert({3*X+3*Y+3,3*X+2,3*Y+1});
        pq1.insert({3*X+3*Y+3,3*X+1,3*Y+2});
        pq1.insert({3*X+3*Y+6,3*X+2,3*Y+2});
        st.insert({X,Y});
    };
    push(0,0);
    push(0,1);
    push(1,0);

    for(ll i=0;i<n;i++){
        if(t[i] == 0){
            auto v = *pq0.begin();
            int X = v[1],Y = v[2];
            pq1.erase({3*X+3*Y+2,3*X+1,3*Y+1});
            pq0.erase(v);
            cout<<3*X+1<<" "<<3*Y+1<<endl;

            push(X+1,Y);
            push(X+2,Y);
            push(X,Y+1);
            push(X,Y+2);
            push(X+1,Y+1);
        }
        else{
            auto v = *pq1.begin();
            int X = v[1]/3,Y = v[2]/3;
            pq0.erase({3*X+3*Y+2,X,Y});
            pq1.erase(v);
            cout<<v[1]<<" "<<v[2]<<endl;

            push(X+1,Y);
            push(X+2,Y);
            push(X,Y+1);
            push(X,Y+2);
            push(X+1,Y+1);
        }
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
