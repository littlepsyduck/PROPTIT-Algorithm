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

ll k;
string s;
ll b[Nmax];
ll ans;
priority_queue<ll> pq;
void solve()
{
    cin >> k >> s;
    memset(b, 0, sizeof(b));
    while (pq.size())
        pq.pop();
    for (int i = 0; i < s.size(); i++)
    {
        b[s[i]]++;
    }
    for (int i = 'A'; i <= 'Z'; i++)
    {
        if (b[i] > 0)
            pq.push(b[i]);
    }
    while (pq.size() && k > 0 && pq.top() > 0)
    {
        ll top = pq.top();
        pq.pop();
        top--;
        pq.push(top);
        k--;
    }
    while (pq.size())
    {
        ans += pq.top() * pq.top();
        pq.pop();
    }
    cout << ans;
    ans = 0;
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
