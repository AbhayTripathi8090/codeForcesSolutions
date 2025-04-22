// #include <bits/stdc++.h>
// using namespace std;
// #define MOD 998244353
// #define ll long long

// bool isPrime(long long n) {
//     if (n <= 1) return false;
//     if (n <= 3) return true;

//     if (n % 2 == 0 || n % 3 == 0) return false;

//     for (long long i = 5; i * i <= n; i += 6) {
//         if (n % i == 0 || n % (i + 2) == 0)
//             return false;
//     }

//     return true;
// }

// void solve()
// {
//     ll n,k;
//     cin>>n>>k;

//     if(isPrime(n) && k==1){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     cin >> T;
//     while (T--)
//     {
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Multiply (a * b) % mod using 128-bit integer to avoid overflow
ll mulmod(ll a, ll b, ll mod) {
    return (__int128)a * b % mod;
}

// Modular exponentiation
ll power(ll base, ll exp, ll mod) {
    ll result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) result = mulmod(result, base, mod);
        base = mulmod(base, base, mod);
        exp >>= 1;
    }
    return result;
}

// Miller-Rabin primality test
bool isPrime(ll n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0) return false;

    ll d = n - 1;
    int s = 0;
    while (d % 2 == 0) {
        d /= 2;
        s++;
    }

    vector<ll> bases = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};

    for (ll a : bases) {
        if (a >= n) break;
        ll x = power(a, d, n);
        if (x == 1 || x == n - 1) continue;
        bool ok = false;
        for (int r = 1; r < s; r++) {
            x = mulmod(x, x, n);
            if (x == n - 1) {
                ok = true;
                break;
            }
        }
        if (!ok) return false;
    }

    return true;
}

// Main solve function
void solve() {
    int t;
    cin >> t;
    while (t--) {
        string x;
        int k;
        cin >> x >> k;

        // Construct y = x repeated k times
        string y_str = "";
        for (int i = 0; i < k; i++) y_str += x;

        // If y is too big to fit in long long, say NO
        if (y_str.size() > 18) {
            cout << "NO\n";
            continue;
        }

        ll y = stoll(y_str);
        if (isPrime(y)) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
