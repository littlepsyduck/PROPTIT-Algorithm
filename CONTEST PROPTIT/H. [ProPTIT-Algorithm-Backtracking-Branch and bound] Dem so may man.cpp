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

int n, c;
int check[10];
vector<ll> v;
void Try(ll so, int cnt)
{
    if (cnt > 2 || so > 1e9)
        return;
    v.pb(so);
    for (int i = 0; i <= 9; i++)
    {
        if (check[i] == 0)
        {
            check[i] = 1;
            Try(so * 10 + i, cnt + 1);
            check[i] = 0;
        }
        else
            Try(so * 10 + i, cnt);
    }
}

void solve()
{
    cin >> n;
    for (int i = 1; i <= 9; i++)
    {
        check[i] = 1;
        Try(i, 1);
        check[i] = 0;
    }
    sort(v.begin(), v.end());
    c = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] <= n)
            c++;
        else
            break;
    }
    cout << c;
}

int main()
{
    fast();
    solve();
}
