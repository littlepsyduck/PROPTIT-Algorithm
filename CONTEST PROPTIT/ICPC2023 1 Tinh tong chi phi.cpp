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
ll top1, top2, toptop;
void solve()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        pq.push(a[i]);
    while (pq.size() > 1)
    {
        if (n > k)
        {
            n -= (k - 1);
            toptop = pq.top();
            for (int i = 1; i <= k; i++)
            {
                top1 = pq.top();
                s1 += top1;
                if (i == k)
                {
                    cnt += top1 - toptop;
                }
                pq.pop();
            }
            pq.push(s1);
        }
        else
        {
            toptop = pq.top();
            for (int i = 1; i <= n; i++)
            {
                top1 = pq.top();
                s1 += top1;
                if (i == n)
                {
                    cnt += top1 - toptop;
                }
                pq.pop();
            }
            pq.push(s1);
        }
        s1 = 0;
    }
    cout << pq.top() << "\n"<< cnt;
}

int main()
{
    fast
    // test{}
    solve();
}
