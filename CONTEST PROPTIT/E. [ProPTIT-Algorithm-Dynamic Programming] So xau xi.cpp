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

ll n;
ll ugly[10005];
void solve()
{
    cin >> n;
    cout << ugly[n - 1];
}

int main()
{
    fast int t = 1;
    cin >> t;
    cin.ignore();
    ll i2 = 0, i3 = 0, i5 = 0;
    ll next2 = 2;
    ll next3 = 3;
    ll next5 = 5;
    ll next = 1;
    ugly[0] = 1;
    for (ll i = 1; i < 10000; i++)
    {
        next = min(next2, min(next3, next5));
        ugly[i] = next;
        if (next == next2)
        {
            i2 = i2 + 1;
            next2 = ugly[i2] * 2;
        }
        if (next == next3)
        {
            i3 = i3 + 1;
            next3 = ugly[i3] * 3;
        }
        if (next == next5)
        {
            i5 = i5 + 1;
            next5 = ugly[i5] * 5;
        }
    }
    process
}