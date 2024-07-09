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
    int fi;
    int se;
    int thi;
};

struct cmp
{
    bool operator()(dat a, dat b)
    {
        if (a.fi == b.fi)
        {
            if (a.thi == b.thi)
                return a.se < b.se;
            else
                return a.thi > b.thi;
        }
        else
            return a.fi < b.fi;
    }
};

pair<int, int> res = {INT_MIN, 0};
void getres(dat u)
{
    if (u.fi > res.first)
    {
        res.first = u.fi;
        res.second = u.thi;
    }
    else if (u.fi == res.first)
    {
        res.second = min(res.second, u.thi);
    }
}

void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n + 5] = {};
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    priority_queue<dat, vector<dat>, cmp> q;
    q.push({0, 0, 0});
    for (int i = 1; i <= n; i++)
    {
        dat u = q.top();
        while (q.size() && u.se < i - k)
        {
            q.pop();
            u = q.top();
        }
        dat v = {u.fi + a[i], i, u.thi + 1};
        getres(v);
        q.push(v);
    }
    cout << res.first << " " << res.second;
}

int main()
{
    fast int t = 1;
    // cin >> t; cin.ignore();
    process
}