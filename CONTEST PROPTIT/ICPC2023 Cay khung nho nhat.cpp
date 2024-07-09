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

struct Edge
{
    ll u, v, c;
    Edge(ll _u, ll _v, ll _c) : u(_u), v(_v), c(_c){};
};

struct Dsu
{
    vector<int> par;

    void init(ll n)
    {
        par.resize(n + 5, 0);
        for (ll i = 1; i <= n; i++)
            par[i] = i;
    }

    ll find(ll u)
    {
        if (par[u] == u)
            return u;
        return par[u] = find(par[u]);
    }

    bool join(ll u, ll v)
    {
        u = find(u);
        v = find(v);
        if (u == v)
            return false;
        par[v] = u;
        return true;
    }
} dsu;

ll n, m, totalWeight = 0;
vector<Edge> edges;

void solve()
{
    cin >> n >> m;

    for (ll i = 1; i <= m; i++)
    {
        ll u, v, c;
        cin >> u >> v >> c;
        edges.push_back({u, v, c});
    }

    dsu.init(n);

    sort(edges.begin(), edges.end(), [](Edge &x, Edge &y)
         { return x.c < y.c; });

    for (auto e : edges)
    {

        if (!dsu.join(e.u, e.v))
            continue;

        totalWeight += e.c;
    }

    cout << totalWeight;
    totalWeight = 0;
    edges.clear();
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
