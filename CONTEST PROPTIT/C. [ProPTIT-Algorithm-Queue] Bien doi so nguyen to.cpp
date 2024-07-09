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

int isPrime[1000005];
void sieve()
{
    for (int i = 0; i <= 1000005; ++i)
    {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i * i <= 1000005; ++i)
    {
        if (isPrime[i] == true)
        {
            for (int j = i * i; j <= 1000005; j += i)
                isPrime[j] = false;
        }
    }
}

int s, t;
queue<string> q;
inline void solve()
{
    cin >> s >> t;
    string s1 = to_string(s);
    string s2 = to_string(t);
    string ans;
    while (q.size())
        q.pop();
    if (s == t)
    {
        cout << 0;
        return;
    }
    q.push(s1);
    map<string, int> mp;
    mp[s1] = 1;
    int tmp;
    while (1)
    {
        string top = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            ans = top;
            for (char j = '0'; j <= '9'; j++)
            {
                top[i] = j;
                tmp = stoi(top);
                if (isPrime[tmp] && tmp >= 1000 && !mp[top])
                {
                    if (top == s2)
                    {
                        cout << mp[ans];
                        return;
                    }
                    mp[top] = mp[ans] + 1;
                    q.push(top);
                }
                top = ans;
            }
        }
    }
}

int main()
{
    fast
    sieve();
    test
    {
        solve();
        cout << "\n";
    }
}
