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
    int w;
    int d;
    int h;
};

bool cmp(dat a, dat b)
{
    if (a.w == b.w)
    {
        if (a.d == b.d)
            return a.h > b.h;
        else
            return a.d > b.d;
    }
    else
        return a.w > b.w;
}

bool valid(dat a, dat b)
{
    return a.w < b.w && a.d < b.d;
}

int n;
void solve()
{
    cin >> n;
    vector<dat> k(n);
    for (int i = 0; i < n; i++)
    {
        cin >> k[i].w >> k[i].d >> k[i].h;
    }
    sort(k.begin(), k.end(), cmp);
    ll f[n] = {};
    ll res = 0;
    for (int i = 0; i < n; i++)
    {
        f[i] = k[i].h;
        for (int j = i - 1; j >= 0; j--)
        {
            if (valid(k[i], k[j]) && f[i] < f[j] + k[i].h)
            {
                f[i] = f[j] + k[i].h;
            }
        }
        res = max(res, f[i]);
    }
    cout << res;
}

int main()
{
    fast int t = 1;
    // cin >> t; cin.ignore();
    process
}