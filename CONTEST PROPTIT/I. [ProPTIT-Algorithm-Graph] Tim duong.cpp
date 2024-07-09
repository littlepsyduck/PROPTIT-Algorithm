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

struct dat
{
    int first;  // chi so
    int second; // so luong da di qua
    int third;  // so duong co trong so la 1
};

struct Edge
{
    int v;
    int w;
};

bool cmp(Edge a, Edge b)
{
    return a.w > b.w;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<Edge> nt[n + 5];
    vector<bool> vt(n + 5, false);
    int sum = 0;
    while (m--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        nt[x].push_back({y, z});
        nt[y].push_back({x, z});
        sum += z;
    }
    for (int i = 1; i <= n; i++)
    {
        sort(nt[i].begin(), nt[i].end(), cmp);
    }
    queue<dat> k;
    k.push({1, 0, 0});
    vt[1] = 1;
    pair<int, int> res = {-1, -1}; // first la ket qua, second la bien dem
    while (k.size())
    {
        dat u = k.front();
        k.pop();
        if (u.first == n)
        {
            int tmp = sum + u.second - 2 * u.third;
            if (res.second == -1)
            {
                res.second = u.second;
                res.first = tmp;
            }
            else
            {
                if (u.second > res.second)
                    break;
                res.first = min(res.first, tmp);
            }
        }
        for (auto x : nt[u.first])
        {
            if (!vt[x.v])
            {
                if (x.v != n)
                    vt[x.v] = 1;
                k.push({x.v, u.second + 1, u.third + x.w});
            }
        }
    }
    cout << res.first;
}