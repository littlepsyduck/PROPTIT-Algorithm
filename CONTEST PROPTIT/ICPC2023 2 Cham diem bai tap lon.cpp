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
    vector<int>idx;
    vector<double> a(n + 1), d(n + 1);
    for (int i = 1; i <= n ; i++) cin >> a[i];
 
    double s = a[n]; 
    ll _min = (a[n]); 
    double _max = -1e9;
 
    for (int i = n - 1; i >= 2; i--) {
        s += a[i];
        if (a[i] < _min) _min = a[i];
        d[i] = (s - _min)/(n - i);
        if (d[i] > _max) _max = d[i];
    }
    for (int i = 2; i <= n - 1; i++) {
        if (d[i] == _max) idx.pb(i-1);
    }
    for (int x :idx) cout << x << " ";
}

int main()
{
    fast int t = 1;
    //cin >> t;cin.ignore();
    process
}
