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

ll n, m;
int main()
{
    fast while (cin >> n >> m)
    {

        if (n == 0 && m == 0)
        {
            return 0;
        }
        else if (n == 0)
        {
            cout << -m * m << "\n";
        }
        else if (m == 0)
        {
            cout << n * n << "\n";
        }
        else
        {
            ll maxx = -1e18;
            for (int i = 1; i <= n; i++)
            {
                ll s1, s2, s, x, y;
                s1 = i - 1 + (n - i + 1) * (n - i + 1);
                x = m / (i + 1);
                y = m - x * (i + 1);
                s2 = y * (x + 1) * (x + 1) + (i + 1 - y) * x * x;
                s = s1 - s2;
                maxx = max(maxx, s);
            }
            cout << maxx << "\n";
        }
    }
}
