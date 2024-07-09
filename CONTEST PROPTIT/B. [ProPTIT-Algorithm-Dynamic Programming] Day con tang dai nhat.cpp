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

vector<int> v;
int a[1005], f[1005], b[1005], n, ans;
void LIS(int a[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        f[i] = 1;
        for (int j = 1; j < i; j++)
            if (a[j] < a[i] && f[i] < f[j] + 1)
            {
                f[i] = f[j] + 1;
            }
        ans = max(ans, f[i]);
    }
    // int x = *max_element(f + 1, f + n + 1);
    cout << ans << "\n";
    for (int i = n; i >= 1; i--)
    {
        if (f[i] == ans)
        {
            v.pb(a[i]);
            ans--;
        }
    }

    for (int i = v.size() - 1; i >= 0; i--)
        cout << v[i] << ' ';
}

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    LIS(a, n);
}

int main()
{
    fast int t = 1;
    // cin >> t; cin.ignore();
    process
}
