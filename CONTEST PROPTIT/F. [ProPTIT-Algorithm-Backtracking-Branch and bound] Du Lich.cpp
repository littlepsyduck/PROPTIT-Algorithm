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

int check[105];
int n;
ll c[105][105];
ll x[105];
ll s;
ll minn = 1e9, bestmin = 1e9;

void Try(int i)
{
    if (s + bestmin * (n - i + 1) > minn)
    {
        return;
    }

    for (int j = 1; j <= n; j++)
    {
        if (check[j])
        {
            x[i] = j;
            check[j] = 0;
            s += c[x[i - 1]][j];
            if (i == n)
            {
                if (s + c[x[n]][x[1]] < minn)
                {
                    minn = s + c[x[n]][x[1]];
                }
            }
            else
            {
                Try(i + 1);
            }
            s -= c[x[i - 1]][j];
            check[j] = 1;
        }
    }
}

int main()
{
    fast();
    cin >> n;
    if (n == 0 || n == 1)
        minn = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> c[i][j];
            bestmin = min(bestmin, c[i][j]);
        }
    }
    memset(check, 1, sizeof(check));
    check[1] = 0;
    x[1] = 1;
    Try(2);
    cout << minn;
}
