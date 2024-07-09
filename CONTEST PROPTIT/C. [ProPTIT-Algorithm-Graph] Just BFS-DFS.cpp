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

int n;
int a[1005][1005];
bool kt[1005][1005];
int cnt[1005][1005];
int dx[5] = {1, 0};
int dy[5] = {0, 1};
string s;
void bfs(int i, int j)
{
    queue<pair<pair<int, int>, string>> q;
    q.push({{i, j}, s});
    a[i][j] = 0;
    cnt[i][j] = 0;
    while (q.size())
    {
        pair<pair<int, int>, string> top = q.front();
        q.pop();
        for (int k = 0; k < 2; k++)
        {
            int i1 = top.first.first + dx[k];
            int j1 = top.first.second + dy[k];
            string s1 = top.second;
            if (k == 0)
                s1 += 'D';
            else
                s1 += 'R';
            if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1] == 1)
            {
                cnt[i1][j1] = cnt[top.first.first][top.first.second] + 1;
                if (i1 == n && j1 == n)
                {
                    s = s1;
                    return;
                }
                q.push({{i1, j1}, s1});
                a[i1][j1] = 0;
            }
        }
    }
}

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    memset(kt, false, sizeof(kt));
    bfs(1, 1);
    if (cnt[n][n] == 0)
    {
        cout << -1;
    }
    else
    {
        cout << s;
    }
}

int main()
{
    fast int t = 1;
    // cin >> t;cin.ignore();
    process
}
