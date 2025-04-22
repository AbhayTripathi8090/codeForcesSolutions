#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    ll n, cnt = 0, ans = 0;
    cin >> n;
    vector<ll> a(n);
    f(i, n) cin >> a[i];

    ll left = 0, right = n - 1;
    ll leftSum = 0, rightSum = 0;

    while (left <= right)
    {
        cnt++;
        if (leftSum < rightSum)
        {
            leftSum += a[left];
            left++;
        }
        else
        {
            rightSum += a[right];
            right--;
        }
        if (leftSum == rightSum)
        {
            ans = cnt;
        }
    }

    cout << ans << endl;
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
