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

int n, k;
ll c[1005][1005];
void prepare() {
    for (int i = 0; i <= 1000; ++i) {
        for (int j = 0; j <= i; ++j) {
            if (j == 0 || j == i)
                c[i][j] = 1;
            else if (j == 1 || j == i - 1)
                c[i][j] = i;
            else
                c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
            c[i][j] %= mod;
        }
    }
}

void solve()
{
    cin >> n >> k;
    cout << c[n][k];
}

int main()
{
    fast
    prepare(); 
    int t = 1;
    cin >> t; cin.ignore();
    process
}