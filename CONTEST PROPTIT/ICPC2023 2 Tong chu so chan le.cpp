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

ll n;
void solve()
{
    cin >> n;
    string s;
    int sum1 = 0, sum2 = 0;
    s = to_string(n);
    for (int i = 1; i < s.size();)
    {
        sum1 += s[i] - 48;
        i = i + 2;
    }
    for (int i = 0; i < s.size();)
    {
        sum2 += s[i] - 48;
        i = i + 2;
    }
    cout << sum1 << " " << sum2;
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
