// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define f(i, n) for (ll i = 0; i < n; i++)

// void solve()
// {
//     ll n,k;
//     cin>>n>>k;
//     vector<ll>v(n);
//     f(i,n)cin>>a[i];
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int computeDistinctFValues(int n) {
    int maxF = 0;
    for (int i = 1; i <= n; ++i) {
        maxF += abs((n - i + 1) - i); 
    }
    return (maxF / 2) + 1; 
}

int main() {
    int t;
    cin >> t;
    vector<int> testCases(t);
    for (int i = 0; i < t; ++i) {
        cin >> testCases[i];
    }

    for (int i = 0; i < t; ++i) {
        cout << computeDistinctFValues(testCases[i]) << endl;
    }

    return 0;
}
