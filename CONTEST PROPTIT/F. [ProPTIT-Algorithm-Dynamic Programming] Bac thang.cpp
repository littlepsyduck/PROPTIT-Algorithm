#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'
#define pb push_back
#define bop pop_back
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define process       \
    while (t--)       \
    {                 \
        solve();      \
        cout << "\n"; \
    }

using namespace std;

const int Nmax = 1e6;

int n, k;
ll solve(int n, int k)
{
    // cin >> n >> k;
    vector<ll> result;
    result.pb(1);
    ll sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (i >= k + 1)
            sum = (sum - result[i - k - 1] + mod) % mod;
        sum = (sum + result.back()) % mod;
        result.pb(sum);
    }
    return result[n];
}

int main()
{
    fast int t = 1;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << solve(n, k) << "\n";
    }
    // process
}