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
#define test  \
    int t;    \
    cin >> t; \
    while (t--)

using namespace std;

const int Nmax = 1e6;

int n;
ll a[Nmax], l[Nmax], r[Nmax], ans, count;
stack<int> st;
void solve()
{
    cin >> n;
    for (ll &x : a)
        cin >> x;
    for (int i = 0; i < n; ++i)
    {
        while (!st.empty() and a[i] >= a[st.top()])
            st.pop();
        if (st.empty())
            l[i] = 0;
        else
            l[i] = st.top() + 1;
        st.push(i);
    }
    while (!st.empty())
        st.pop();
    for (int i = n - 1; i >= 0; --i)
    {
        while (!st.empty() and a[i] >= a[st.top()])
            st.pop();
        if (st.empty())
            r[i] = n - 1;
        else
            r[i] = st.top() - 1;
        st.push(i);
    }

    for (int i = 0; i < n; ++i)
    {
        ll count = ((1ll * i - l[i] + 1) % mod) * ((1ll * r[i] - i + 1) % mod) % mod;
        ans += (1ll * a[i] * count) % mod;
    }
    cout << ans % mod;
}

int main()
{
    fast
    // test{
    solve();
    //	cout<<"\n";
    //}
}
