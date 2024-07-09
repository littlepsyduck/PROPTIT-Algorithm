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


void solve()
{
    char b[100];
    int cnt = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        b[s[i]]++;
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (b[i] == 0)
            cnt++;
    }
    int k;
    cin >> k;
    if (cnt <= k)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    fast int t = 1;
    cin >> t;
    cin.ignore();
    process
}
