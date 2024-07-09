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

int t, x;
string a, b;
int xt[6] = {3, 0, 2, 4, 1, 5};
int xp[6] = {0, 4, 1, 3, 5, 2};
string left(string s)
{
    string ans = "";
    for (int i = 0; i <= 5; i++)
    {
        ans += s[xt[i]];
    }
    return ans;
}

string right(string s)
{
    string ans = "";
    for (int i = 0; i <= 5; i++)
    {
        ans += s[xp[i]];
    }
    return ans;
}

int bfs(string a, string b)
{
    queue<pair<string, int>> q;
    q.push({a, 0});
    pair<string, int> x;
    string y;
    while (!q.empty())
    {
        x = q.front();
        q.pop();
        if (x.first == b)
        {
            return x.second;
        }
        y = left(x.first);
        q.push({y, x.second + 1});
        y = right(x.first);
        q.push({y, x.second + 1});
    }
    return -1;
}
void solve()
{
    a = "";
    for (int i = 1; i <= 6; i++)
    {
        cin >> x;
        a += (char)(x + '0');
    }
    b = "";
    for (int i = 1; i <= 6; i++)
    {
        cin >> x;
        b += (char)(x + '0');
    }
    cout << bfs(a, b);
}

int main()
{
    fast int t = 1;
    cin >> t;
    cin.ignore();
    process
}
