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

vector<vector<int>> a;
vector<vector<int>> b;
int n, kt;
void DFS(int x, int y, string s = "")
{
    if (x == n - 1 && y == n - 1)
    {
        kt = 1;
        cout << s;
        return;
    }
    if (x < n - 1 && a[x + 1][y] == 1 && b[x + 1][y] == 0)
    {
        b[x + 1][y] = 1;
        DFS(x + 1, y, s + "D");
    }
    if (y < n - 1 && a[x][y + 1] && b[x][y + 1] == 0)
    {
        b[x][y + 1] = 1;
        DFS(x, y + 1, s + "R");
    }
}

void solve()
{
    cin >> n;
    a.resize(n, vector<int>(n));
    b.resize(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    if (a[0][0] == 0 || a[n - 1][n - 1] == 0)
    {
        cout << "-1";
        return;
    }
    DFS(0, 0);
    if (!kt)
        cout << "-1";
}

int main()
{
    fast int t = 1;
    // cin >> t;cin.ignore();
    process
}
