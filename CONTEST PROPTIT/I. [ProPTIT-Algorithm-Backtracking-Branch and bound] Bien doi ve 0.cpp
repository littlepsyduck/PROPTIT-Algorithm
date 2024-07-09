#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'
#define pb push_back
#define pop pop_back
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
int cnt;
int a[32768 + 10];
void Try(int z, int sobuoc)
{
    if (sobuoc > cnt)
        return;
    if (a[z] != -1)
    {
        cnt = min(cnt, a[z] + sobuoc);
        return;
    }
    if (z == 0)
    {
        cnt = min(cnt, sobuoc);
        return;
    }
    int somoi1 = (z * 2) % 32768;
    int somoi2 = (z + 1) % 32768;
    Try(somoi1, sobuoc + 1);
    Try(somoi2, sobuoc + 1);
}

void solve()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cnt = 1e9;
        Try(x, 0);
        a[x] = cnt;
        cout << cnt << " ";
    }
}

int main()
{
    fast
        // test{}
        for (int i = 0; i <= 32768; i++)
    {
        a[i] = -1;
    }
    solve();
}
