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

//     1 2 3 8 0 0 4 7 6 5
// idx 0 1 2 3 4 5 6 7 8 9
//     8 1 3 7 0 2 4 6 0 5

// 0-1 1-5 2-2 3-0 4-4 5-8 6-6 7-3 8-7 9-9
int l1[10] = {0, 4, 1, 3, 8, 5, 2, 7, 9, 6};
int r1[10] = {3, 0, 2, 7, 4, 1, 6, 8, 5, 9};
int l2[10] = {1, 5, 2, 0, 4, 8, 6, 3, 7, 9};
int r2[10] = {0, 2, 6, 3, 1, 5, 9, 7, 4, 8};
string left1(string a)
{
    string b = "";
    for (int i = 0; i < 10; i++)
        b += a[l1[i]];
    return b;
}
string right1(string a)
{
    string b = "";
    for (int i = 0; i < 10; i++)
        b += a[r1[i]];
    return b;
}
string left2(string a)
{
    string b = "";
    for (int i = 0; i < 10; i++)
        b += a[l2[i]];
    return b;
}
string right2(string a)
{
    string b = "";
    for (int i = 0; i < 10; i++)
        b += a[r2[i]];
    return b;
}

string x(10, 0), y = "1238004765";
map<string, int> m;
queue<pair<string, int>> q1;
queue<pair<string, int>> q2;
void solve()
{
    for (int i = 0; i < 10; i++)
    {
        cin >> x[i];
    }
    if (x == y)
    {
        cout << 0;
        return;
    }
    q1.push({x, 0});
    q2.push({y, 0});
    while (q1.size())
    {
        pair<string, int> tmp = q1.front();
        q1.pop();
        if (m[tmp.first] == 0)
            m[tmp.first] = tmp.second;
        if (tmp.second == 16)
            break;
        q1.push({left1(tmp.first), tmp.second + 1});
        q1.push({right1(tmp.first), tmp.second + 1});
    }
    int cnt = INT_MAX;
    while (q2.size())
    {
        pair<string, int> tmp = q2.front();
        q2.pop();
        if (m[tmp.first])
            cnt = min(cnt, m[tmp.first] + tmp.second);
        if (tmp.second == 16)
            break;
        q2.push({left2(tmp.first), tmp.second + 1});
        q2.push({right2(tmp.first), tmp.second + 1});
    }
    cout << cnt;
}

int main()
{
    fast int t = 1;
    // cin >> t;cin.ignore();
    process
}
