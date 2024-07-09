#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'
#define pb push_back

using namespace std;

const int Nmax = 1e6;

void fast()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int k;
string s, p, s0;
void Try(int i, string s, string p, int k)
{
    if (k == 0 || i == s.size())
    {
        s0 = max(s0, s);
        return;
    }
    if (s[i] != p[i])
    {
        for (int j = 0; j < p.size(); j++)
        {
            if (s[j] == p[i])
            {
                swap(s[j], s[i]);
                s0 = max(s0, s);
                Try(i + 1, s, p, k - 1);
                swap(s[j], s[i]);
            }
        }
    }
    else
        Try(i + 1, s, p, k);
}

void solve()
{
    cin >> k >> s;
    p = s;
    s0 = s;
    for (int i = 0; i < p.size(); i++)
    {
        for (int j = i + 1; j < p.size(); j++)
        {
            if (p[i] < p[j])
            {
                swap(p[i], p[j]);
            }
        }
    }
    Try(0, s, p, k);
    cout << s0;
}

int main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
}
