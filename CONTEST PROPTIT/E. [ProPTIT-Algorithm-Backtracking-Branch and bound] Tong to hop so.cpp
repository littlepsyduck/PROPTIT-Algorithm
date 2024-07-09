#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'
#define pb push_back
#define pop pop_back

using namespace std;

const int Nmax = 1e6;

void fast()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int n, x;
int a[105];
vector<vector<int>> v0;
vector<int> v;
ll cnt;
void Try(int i, int s, vector<int> v)
{
    if (s > x)
        return;
    if (s == x)
    {
        v0.pb(v);
        return;
    }
    for (int j = i; j <= n; j++)
    {
        if (s + a[j] <= x)
        {
            v.pb(a[j]);
            Try(j, s + a[j], v);
            v.pop();
        }
    }
}
void solve()
{
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    v.clear();
    v0.clear();
    Try(1, 0, v);
    if (v0.size() == 0)
    {
        cout << -1;
    }
    else
    {
        cout << v0.size() << " ";
        for (int i = 0; i < v0.size(); i++)
        {
            vector<int>x = v0[i];
            cout << "{";
            for (int j = 0; j < x.size() - 1; j++)
            {
                cout << x[j] << " ";
            }
            cout << x[x.size() - 1] << "} ";
        }
    }
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
