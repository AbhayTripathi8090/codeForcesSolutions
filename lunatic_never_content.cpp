#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long

// Template-based palindrome checker
template <typename T>
bool isPalindrome(const vector<T>& vec) {
    int left = 0, right = vec.size() - 1;
    while (left < right) {
        if (vec[left] != vec[right])
            return false;
        left++;
        right--;
    }
    return true;
}

void solve()
{
    ll n, ans = 0;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll i=0,j=n-1;
    ll x = abs(a[i]-a[j]);
    while(i<=j){
        x = __gcd(x,abs(a[i]-a[j]));
        i++,j--;
    }
    cout << x << "\n";
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
