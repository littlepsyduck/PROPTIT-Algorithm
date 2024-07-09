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

int a[1005][1005];
int n, m;
ll l[1000006], r[1000006], h[1000006], res, ans, ans1;
stack<int> st;
void cal(int i)
{
    for (int j = 0; j < m; ++j)
    {
        while (!st.empty() and a[i][j] <= a[i][st.top()])
            st.pop();
        if (st.empty())
            l[j] = 0;
        else
            l[j] = st.top() + 1;
        st.push(j);
    }
    while (!st.empty())
        st.pop();

    for (int j = m - 1; j >= 0; --j)
    {
        while (!st.empty() and a[i][j] <= a[i][st.top()])
            st.pop();
        if (st.empty())
            r[j] = m - 1;
        else
            r[j] = st.top() - 1;
        st.push(j);
    }

    while (!st.empty())
        st.pop();

    for (int j = 0; j < m; ++j)
    {
        ans = max(ans, 1ll * a[i][j] * (r[j] - l[j] + 1));
    }
}

void solve()
{

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int j = 1; j <= m; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            if (a[i][j])
            {
                a[i][j] = a[i - 1][j] + 1;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cal(i);
    }
    cout << ans;
}

int main()
{
    fast
    // test
    //{
    solve();
    //  cout << "\n";
    //}
}
