#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'
#define pb push_back
#define pop pop_back
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define test  \
    int t;    \
    cin >> t; \
    while (t--)

using namespace std;

const int Nmax = 1e6;

int n, m;
int a[305][305], a0[305][305];
int b[10][10];
ll s, ss;
void solve()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cin >> b[i][j];
        }
    }
    int i = 1, j = 1;
    while (i + 2 <= n && j + 2 <= m)
    {
        s = (a[i][j] * b[1][1]) + (a[i][j + 1] * b[1][2]) + (a[i][j + 2] * b[1][3]) + (a[i + 1][j] * b[2][1]) + (a[i + 1][j + 1] * b[2][2]) + (a[i + 1][j + 2] * b[2][3]) + (a[i + 2][j] * b[3][1]) + (a[i + 2][j + 1] * b[3][2]) + (a[i + 2][j + 2] * b[3][3]);
        if (j + 2 < m)
        {
            j++;
        }
        else
        {
            j = 1;
            i++;
        }
        ss += s;
    }
    cout << ss;
    ss = 0;
}

int main()
{
    fast
        test
    {
        solve();
        cout << "\n";
    }
}
