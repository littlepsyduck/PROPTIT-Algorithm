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

stack<char> s1;
stack<char> s2;
stack<char> st;
string s;
void solve()
{
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '<' || s[i] == '>' || s[i] == '-')
        {
            if (s[i] == '<')
            {
                if (s1.size())
                {
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            else if (s[i] == '>')
            {
                if (s2.size())
                {
                    s1.push(s2.top());
                    s2.pop();
                }
            }
            else if (s[i] == '-')
            {
                if (s1.size())
                    s1.pop();
            }
        }
        else
            s1.push(s[i]);
    }
    while (s1.size())
    {
        s2.push(s1.top());
        s1.pop();
    }
    // while (s1.size())
    // {
    //     st.push(s1.top());
    //     s1.pop();
    // }
    while (s2.size())
    {
        cout << s2.top();
        s2.pop();
    }
}

int main()
{
    fast
    //    test
    //{
    solve();
    //    cout << "\n";
    //}
}
