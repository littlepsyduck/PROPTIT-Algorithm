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
void solve()
{
    cin >> n >> k;
    int a[n + 5][n + 5] = {};
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    int f[n + 5][n + 5] = {};
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            f[i][j] = f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1] + a[i][j];
        }
    }
    int ans = 0;
    for (int i = k; i <= n; ++i)
    {
        for (int j = k; j <= n; ++j)
        {
            int S = f[i][j] - f[i - k][j] - f[i][j - k] + f[i - k][j - k];
            ans = max(ans, S);
        }
    }
    cout << ans;
}

int main()
{
    fast int t = 1;
    // cin >> t;cin.ignore();
    process
}