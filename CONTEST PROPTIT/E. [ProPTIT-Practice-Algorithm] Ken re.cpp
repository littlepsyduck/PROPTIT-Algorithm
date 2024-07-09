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

ll t, n, k, t0;

ll mul(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 2;
    ll p = mul(n / 2);
    if (n % 2)
        return 2 * p * p;
    return p * p;
}

void solve()
{
    cin >> k;
    ll len = mul(n) / 2;
    while (1)
    {
        if (n == 1)
        {
            cout << 1;
            break;
        }
        if (len == k)
        {
            cout << n;
            break;
        }
        if (k > len)
        {
            k = len - (k - len);
        }
        n--;
        len /= 2;
    }
}

int main()
{
    fast
            cin >>
        t;
    while (t--)
    {
        n = 61;
        solve();
        cout << " ";
    }
}
