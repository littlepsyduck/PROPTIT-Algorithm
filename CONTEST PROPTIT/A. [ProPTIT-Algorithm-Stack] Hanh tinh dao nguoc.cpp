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
stack<char> st;
vector<char> v;
void solve()
{
    cin >> s;
    int length = s.size();
    for (int i = 0; i < length; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            v.pb(s[i]);
        }
        else
        {
            st.push((char)s[i]);
        }
    }
    while(st.size()){
        cout<<st.top();
        st.pop();
    }
    cout << st.top() << "\n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
}

int main()
{
    fast
    // test{
    solve();
    //	cout<<"\n";
    //}
}
