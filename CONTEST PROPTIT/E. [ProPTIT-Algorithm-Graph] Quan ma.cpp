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

int dx[] = {1, 2, 2, -1, 1, -2, -1, -2};
int dy[] = {2, 1, -1, 2, -2, 1, -2, -1};
struct vitri
{
    int x;
    int y;
    int cnt;
};

int check[105][105];
queue<vitri> q;
void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    vitri st, en, s;
    memset(check, 0, sizeof(check));
    while(q.size()) q.pop();
    st.cnt = 0;
    st.x = s1[0] - 'a' + 1;
    st.y = s1[1] - '0';
    en.x = s2[0] - 'a' + 1;
    en.y = s2[1] - '0';
    q.push(st);
    check[st.x][st.y] = 1;
    while (q.size())
    {
        st = q.front();
        q.pop();
        if (st.x == en.x && st.y == en.y)
        {
            cout << st.cnt;
            break;
        }
        s = st;
        s.cnt++;
        for (int i = 0; i < 8; i++)
        {
            s.x += dx[i];
            s.y += dy[i];
            if (check[s.x][s.y] == 0 && s.x > 0 && s.x < 9 && s.y > 0 && s.y < 9)
            {
                check[s.x][s.y] = 1;
                q.push(s);
            }
            s.x -= dx[i];
            s.y -= dy[i];
        }
    }
}

int main()
{
    fast int t = 1;
    cin >> t;
    cin.ignore();
    process
}
