#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    
   
    for(int i = n-2;i>=0 && k>0;i--){
        if(s[i] == '0' && s[i+1] == '1'){
            
            s[i] = '1';
            k--;
        }
    }
    int count1 = count(s.begin(),s.end(),'1');
    cout<<count1<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
