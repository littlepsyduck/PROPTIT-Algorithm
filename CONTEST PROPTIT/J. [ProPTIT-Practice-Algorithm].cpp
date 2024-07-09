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

int a[Nmax];
int b[Nmax];
map<int, int> cnt;
int n, maxx = 0, vt;
void solve()
{
    cin >> n;
    if (n == 0)
        return;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
        if (cnt[a[i]] > maxx)
            maxx = cnt[a[i]];
    }
    for (int i = 1; i <= n; i++)
    {
        if (cnt[a[i]] == maxx)
        {
            cout << a[i];
            break;
        }
    }
}

int main()
{
    fast
    // test{
    solve();
    //	cout<<"\n";
    //}
}
