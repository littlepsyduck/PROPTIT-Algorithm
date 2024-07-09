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

int t, n;
int bfs(int n)
{
    queue<pair<int, int>> q;
    map<int, bool> a;
    q.push({n, 0});
    a[n] = true;
    pair<int, int> x;
    while (q.size())
    {
        x = q.front();
        q.pop();
        if (x.first == 1)
            return x.second;
        for (int i = 2; i * i <= x.first; i++)
        {
            if (x.first % i == 0 && !a[x.first / i])
            {
                a[x.first / i] = true;
                q.push({x.first / i, x.second + 1});
            }
        }
        if (!a[x.first - 1])
        {
            a[x.first - 1] = true;
            q.push({x.first - 1, x.second + 1});
        }
    }
    return -1;
}

void solve()
{
    cin >> n;
    cout << bfs(n);
}

int main()
{
    fast int t = 1;
    cin >> t;
    cin.ignore();
    process
}
