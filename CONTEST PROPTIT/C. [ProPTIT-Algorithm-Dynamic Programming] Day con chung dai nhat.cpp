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

string s1, s2;
int f[1005][1005];
void solve()
{
    cin >> s1 >> s2;
    int len1 = s1.size(), len2 = s2.size();

    for (int i = 0; i <= len1; i++)
    {
        for (int j = 0; j <= len2; j++)
        {
            if (i == 0 || j == 0)
            {
                f[i][j] = 0;
            }
            else
            {
                if (s1[i - 1] == s2[j - 1])
                {
                    f[i][j] = f[i - 1][j - 1] + 1;
                }
                else
                {
                    f[i][j] = max(f[i - 1][j], f[i][j - 1]);
                }
            }
        }
    }
    cout << f[len1][len2];
}

int main()
{
    fast int t = 1;
    // cin >> t; cin.ignore();
    process
}