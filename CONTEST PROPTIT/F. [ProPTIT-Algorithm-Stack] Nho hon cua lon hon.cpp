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
int a[Nmax];
stack<int> s;
int b[Nmax], c[Nmax];
int main()
{
    fast
            cin >>
        n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = n; i >= 1; i--)
    {
        while (s.size() && a[i] >= a[s.top()])
            s.pop();
        if (s.size() == 0)
            b[i] = -1;
        else
            b[i] = s.top();
        s.push(i);
    }
    while (s.size())
        s.pop();
    for (int i = n; i >= 1; i--)
    {
        while (s.size() && a[i] <= a[s.top()])
            s.pop();
        if (s.size() == 0)
            c[i] = -1;
        else
            c[i] = a[s.top()];
        s.push(i);
    }
    c[-1] = -1;
    c[n] = -1;
    for (int i = 1; i <= n; i++)
    {
        cout << c[b[i]] << " ";
    }
}
