#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353
#define ll long long

void solve()
{
    int n, w;
    cin >> n >> w;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    int s = 0, e = 2e9, ans = 0;
    
    auto isValid = [&] (int h) -> bool{
        long long total = 0;
        for(int i=0;i<n;i++){
            if(a[i]>h)continue;
            total += h-a[i];
        }
        return total<=w;
    };
    
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        bool check = isValid(mid);
        if (check)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    cout << ans << endl;
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
