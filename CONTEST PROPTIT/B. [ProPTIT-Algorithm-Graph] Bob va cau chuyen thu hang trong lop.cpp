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
#define test  \
    int t;    \
    cin >> t; \
    while (t--)

using namespace std;

const int Nmax = 1e6;

vector<vector<int>> g;
//  vector<int> g[n+1];
// vector<vector<int>> g(n+1, vector<int>{});
queue<int> q;
int check[Nmax];

void Try(int i)
{
    check[i] = 1;
    cout << i << " ";
    for (int j = 0; j < g[i].size(); j++)
    {
        int b = g[i][j];
        if (check[b] == 0)
        {
            Try(b);
        }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    memset(check, 0, sizeof(check));
    g.clear();
    g.resize(n + 5);
    while (q.size())
        q.pop();
    for (int i = 1; i <= m; i++)
    {
        int a, b;
        cin >> a >> b;
        g[a].pb(b);
        g[b].pb(a);
    }
    for (int i = 1; i <= n; i++)
    {
        if (g[i].size())
        {
            cout << g[i].size();
        }
        else
            cout << 0;
        cout << "\n";
    }
    // Try(u);
}

int main()
{
    fast
    //    test
    //{
    solve();
    //    cout << "\n";
    //}
}
