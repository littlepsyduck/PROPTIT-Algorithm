#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'
#define pb push_back

using namespace std;

const int Nmax = 1e6;

void fast()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int m, n;
ll a[105][105], cnt;
void numberOfPaths(int m, int n)
{
    if (a[m - 1][n] == -1)
        numberOfPaths(m - 1, n);
    if (a[m][n - 1] == -1)
        numberOfPaths(m, n - 1);
    a[m][n] = a[m - 1][n] + a[m][n - 1];
}

void solve()
{
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            a[i][j] = -1;
        }
    }
    a[1][1] = 1;
    if (n == 1 && m == 1)
        a[n][m] = 1;
    else
    {
        numberOfPaths(m, n);
    }
    cout << a[m][n];
}

int main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}