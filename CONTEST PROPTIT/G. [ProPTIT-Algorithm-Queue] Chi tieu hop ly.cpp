#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'
#define pb push_back
#define pob pop_back
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
ll n, k, n0;
ll a[Nmax];
priority_queue<ll, vector<ll>, greater<ll>> pq;
ll s, cnt, ans, s1;
ll toptop, toptop2;
void solve()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        pq.push(a[i]);
    while (pq.size() > 1)
    {
        toptop = pq.top();
        pq.pop();
        toptop2 = pq.top();
        pq.pop();
        cnt += (toptop2 + toptop);
        pq.push(toptop2 + toptop);
    }
    cout << cnt;
}

int main()
{
    fast
    // test{}
    solve();
}
