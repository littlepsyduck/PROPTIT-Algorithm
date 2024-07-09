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

stack<int> p;
void solve()
{
    string s;
    while (cin >> s)
    {
        if (s == "end")
            break;
        if (s == "init")
        {
            while (p.size() > 0)
                p.pop();
        }
        if (s == "push")
        {
            int x;
            cin >> x;
            p.push(x);
        }
        if (s == "pop" && p.size() > 0)
            p.pop();
        if (s == "top")
        {
            if (!p.empty())
                cout << p.top();
            else
                cout << -1;
        }
        if (s == "size")
            cout << p.size();
        if (s == "empty")
        {
            if (p.empty())
                cout << 1;
            else
                cout << 0;
        }
    }
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
