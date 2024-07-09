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

ll n, x, y, z1, z2, z3, z4;
ll b;

int main()
{
    fast
            cin >>
        n;
    cin >> x >> y;
    if (n == 1)
    {
        cout << x * y;
        return 0;
    }
    else
    {
        z1 = x;
        z2 = y;
        for (int i = 2; i <= n; i++)
        {
            cin >> x >> y;
            z3 = min(x, z1);
            z4 = min(y, z2);
            b = z3 * z4;
            z1 = z3;
            z2 = z4;
        }
        cout << b;
    }
}
