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

int n, k;
ll a[Nmax], l[Nmax], r[Nmax], ans;
ll cnt;
queue<int> q;
void solve()
{
    cin >> n >> k;
    for (ll &x : a)
        cin >> x;
    sort(a, a + n);
    int j = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        q.pop();
        while (j < n && a[j] - a[i] < k)
        {
            q.push(a[j]);
            j++;
        }

        cnt += q.size();
    }
    cout << cnt;
}

int main()
{
    fast
    // test{
    solve();
    //	cout<<"\n";
    //}
}
