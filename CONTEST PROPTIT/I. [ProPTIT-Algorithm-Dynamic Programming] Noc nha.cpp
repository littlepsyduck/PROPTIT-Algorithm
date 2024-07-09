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

int n;
void solve()
{
    cin >> n;
    int a[n + 5] = {};
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    ll f[n + 5][n + 5] = {};
    // Code của anh nó hơi ngược cái giải thích bên trên tại a xét từ j -> i chứ không xét i -> j
    for (int i = 1; i <= n; ++i)
    {
        for (int j = i - 1; j >= 1; --j)
        {
            // Phải for từ i - 1 về 1 chứ không phải từ 1 lên vì mình phải tính cái cấu hình bé trước
            // Tức là muốn tính (1, 10) thì mình phải tính (9, 10) trước đã rồi mới tính được mấy cái
            // cấu hình sau
            f[j][i] = min(f[j + 1][i], f[j][i - 1]) + a[i] - a[j];
        }
    }
    cout << f[1][n];
}

int main()
{
    fast int t = 1;
    // cin >> t;cin.ignore();
    process
}