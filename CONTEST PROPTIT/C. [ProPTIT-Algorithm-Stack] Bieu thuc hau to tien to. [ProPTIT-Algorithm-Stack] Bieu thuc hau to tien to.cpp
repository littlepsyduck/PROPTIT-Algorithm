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

string s;
stack<string> st;
void solve()
{
    cin >> s;
    int length = s.size();
    for (int i = 0; i < length; i++)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            string a = st.top();
            st.pop();
            string b = st.top();
            st.pop();
            string c =  "("+ b + s[i]+ a+")";
            st.push(c);
        }
        else
        {
            st.push(string(1, s[i]));
        }
    }
    cout << st.top();
}

int main()
{
    fast
        test
    {
        solve();
        cout << "\n";
    }
}