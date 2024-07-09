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

int a[1005][1005];
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[0][i];
    }
    int cot = n - 1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            a[i][j] = a[i - 1][j] + a[i - 1][j + 1];
        }
        cot--;
    }
    cot = n;
    for (int i = 0; i < n; i++)
    {
        cout << "[";
        for (int j = 0; j < cot - 1; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << a[i][cot - 1] << "]";
        cout << "\n";
        cot--;
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
    }
}