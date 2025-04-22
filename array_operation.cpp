#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353
#define ll long long

void solve()
{
    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i + 2 < N; i += 2)
    {
        A[i + 2] = max(A[i] + 1, max(A[i + 1], A[i + 2] + 1));
    }

    cout << A[N - 1] << "\n";
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
