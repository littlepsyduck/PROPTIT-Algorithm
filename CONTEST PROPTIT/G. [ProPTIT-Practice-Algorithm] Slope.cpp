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

long long n, l[1000006], r[1000006], h[1000006], res;
stack<int> s;
void solve()
{
    memset(l, 0, sizeof(l));
    memset(r, 0, sizeof(r));
    while (s.size())
        s.pop();
    s.push(1);
    l[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        while (s.size() && h[s.top()] <= h[i])
            s.pop();
        if (s.empty())
            l[i] = 1;
        else
            l[i] = s.top() + 1;
        s.push(i);
    }
    while (s.size())
        s.pop();
    s.push(n);
    r[n] = n;
    for (int i = n - 1; i >= 1; i--)
    {
        while (s.size() && h[s.top()] <= h[i])
            s.pop();
        if (s.empty())
            r[i] = n;
        else
            r[i] = s.top() - 1;
        s.push(i);
    }
    for (int i = 1; i <= n; i++)
    {
        res = r[i] - l[i] + 1;
        cout << res << " ";
    }
}

int main()
{
    fast
            // test{
            cin >>
        n;
    for (int i = 1; i <= n; i++)
        cin >> h[i];
    solve();
    // 	cout<<"\n";
    // }
}
