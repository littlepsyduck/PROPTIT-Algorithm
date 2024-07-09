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

int N, s, a[105], x[105];
ll s1, s2, minn;
ll tmax[Nmax];

void dequy(int i)
{
    if (i <= N)
    {
        if (s2 + (s - s1) / tmax[i] > minn)
            return;
        for (int j = 0; j <= 1; j++)
        {
            x[i] = j;
            s1 += a[i] * j;
            s2 += j;
            if (s1 > s)
            {
                s1 -= a[i] * j;
                s2 -= j;
                return;
            }
            if (s1 == s)
            {
                if (s2 < minn)
                {
                    minn = s2;
                }
            }
            else
                dequy(i + 1);
            s1 -= a[i] * j;
            s2 -= j;
        }
    }
}

void solve()
{
    cin >> N >> s;
    for (int i = 1; i <= N; i++)
    {
        cin >> a[i];
    }
    tmax[N] = a[N];
    for (int i = N - 1; i >= 1; i--)
    {
        tmax[i] = tmax[i + 1];
        if (a[i] > tmax[i])
            tmax[i] = a[i];
    }
    s1 = 0;
    minn = 1e9;
    dequy(1);
    if (minn == 1e9)
        minn = -1;
    cout << minn;
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