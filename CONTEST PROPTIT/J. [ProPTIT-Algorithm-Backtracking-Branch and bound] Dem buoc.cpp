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

int n, ans = 1e9;
ll x;
int f(ll a)
{
    int cnt = 0;
    while (a > 0)
    {
        cnt++;
        a /= 10;
    }
    return cnt;
}

void Try(ll a, int dodai, int sobuoc)
{
    if (n - dodai + sobuoc >= ans)
    {
        return;
    }
    if (dodai == n)
    {
        ans = min(ans, sobuoc);
        return;
    }
    int check[10] = {};
    for (char c : to_string(a))
    {
        check[c - '0'] = 1;
    }
    for (int i = 9; i >= 2; --i)
    {
        if (check[i])
        {
            ll somoi = a * i;
            Try(somoi, f(somoi), sobuoc + 1);
        }
    }
}

void solve()
{
    cin >> n >> x;
    Try(x, f(x), 0);
    if (ans == 1e9)
    {
        cout << -1;
    }
    else
    {
        cout << ans;
    }
}

int main()
{
    fast
    // test{}
    solve();
}
