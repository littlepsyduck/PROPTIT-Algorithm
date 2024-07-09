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
map<int, int> m;
vector<int> a, b;
void solve()
{
    cin >> n;
    a.resize(n + 5);
    b.resize(n + 5);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
        m[a[i]] = i;
    }
    sort(a.begin(), a.begin() + n);

    int l = n - 1, r = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            l = min(l, i);
            r = max(r, i);
        }
    }

    cout << l + 1 << " " << r + 1;
}

int main()
{
    fast int t = 1;
    // cin >> t;cin.ignore();
    process
}
