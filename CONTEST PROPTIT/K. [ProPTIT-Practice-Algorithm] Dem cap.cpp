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

int n, x;
ll cnt;
int a[Nmax];
int check[Nmax];
void solve()
{
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n - 1; i++)
    {
        int id = upper_bound(a, a + n, a[i]+x-1) - a;
        int c = id - i - 1;
        if (c >= 1)
        {
            cnt += c;
        }
    }
    cout << cnt << endl;
}

int main()
{
    fast
    // test{
    solve();
    //	cout<<"\n";
    //}
}
