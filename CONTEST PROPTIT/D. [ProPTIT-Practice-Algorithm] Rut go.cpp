#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'
#define pb push_back

using namespace std;

const int Nmax = 1e6;

void fast()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll k1 = n / k;
    if (k1 % 2 == 0)
    {
        cout << "NO";
    }
    else
        cout << "YES";
}

int main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}