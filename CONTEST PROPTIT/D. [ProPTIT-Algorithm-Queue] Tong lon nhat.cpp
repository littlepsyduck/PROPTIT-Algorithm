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

int n, k;
ll a[Nmax];
void solve()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    priority_queue<pair<ll, int>> q;
    q.push({a[0], 0});
    for (int i = 1; i <= n - 2; i++)
    {
        while (i - q.top().second > k)
            q.pop();
        q.push({q.top().first + a[i], i});
    }
    cout << q.top().first + a[n - 1];
}

int main()
{
    fast int t = 1;
    cin >> t;
    cin.ignore();
    process
}
