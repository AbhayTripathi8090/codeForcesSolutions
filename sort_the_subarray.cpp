#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long

// Template-based palindrome checker
template <typename T>
bool isPalindrome(const vector<T> &vec)
{
    int left = 0, right = vec.size() - 1;
    while (left < right)
    {
        if (vec[left] != vec[right])
            return false;
        left++;
        right--;
    }
    return true;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    ll s=0,e=n-1;
    
    while(e>=0&&a[e] == b[e])--e;
    while(s<n&&a[s] == b[s])++s;
    while(s>0 && b[s] >= b[s-1])--s;
    while(e+1<n && b[e+1] >= b[e])++e;
    
    cout << s+1 << " " << e+1 << "\n";
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
