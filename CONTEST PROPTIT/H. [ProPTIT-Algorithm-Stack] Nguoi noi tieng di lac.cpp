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

int n;

int b[Nmax];
void solve()
{
    cin >> n;
    int a[n+5][n+5];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                b[j]++;
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == n - 1)
        {
            cout << i << " is celebrity";
            cnt++;
            return;
        }
    }
    if (cnt == 0)
        cout << "No celebrity detected";
}

int main()
{
    fast
    // test{
    solve();
    //	cout<<"\n";
    //}
}
