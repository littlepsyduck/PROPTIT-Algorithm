#include <bits/stdc++.h>
#define int long long
using namespace std;
queue<int> q;
int n, ans;
vector<int> a;
int l, r;
void bfs(int s)
{
    q = {};
    q.push(s);
    while (q.size())
    {
        for (int i : a)
        {
            q.push(q.front() * 10 + i);
        }
        int u = q.front();
        if (u > r)
            return;
        if (u >= l && u <= r)
            ans++;
        q.pop();
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    a.push_back(6);
    a.push_back(8);
    int t;
    cin >> t;
    while (t--)
    {
        ans = 0;
        cin >> l >> r;
        bfs(0);
        cout << ans << "\n";
    }
}