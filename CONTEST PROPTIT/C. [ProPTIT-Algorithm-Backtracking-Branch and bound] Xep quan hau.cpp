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

int n, cnt;
bool h[100], c[100], cheo1[100], cheo2[100];
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!h[i]&& !c[j]&& !cheo1[i + j - 1]&& !cheo2[i - j + n])
        {
            h[i] = c[j] = cheo1[i + j - 1] = cheo2[i - j + n] = true;
            if (i == n)
            {
                cnt++;
            }
            else
            {
                Try(i + 1);
            }
            h[i] = c[j] = cheo1[i + j - 1] = cheo2[i - j + n] = false;
        }
    }
}

void solve()
{
    cin >> n;
    Try(1);
    cout << cnt;
    cnt=0;
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