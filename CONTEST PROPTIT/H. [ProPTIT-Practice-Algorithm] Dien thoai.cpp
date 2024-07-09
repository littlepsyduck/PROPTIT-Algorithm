#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'
#define pb push_back
#define pop pop_back
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

vector<int> v;
int cnt;
int x;
string s;
int main()
{
    fast

        while (cin >> s)
    {
        if (s[0] == 'E')
        {
            return 0;
        }

        else
        {
            if (s[0] == '1')
            {
                cin >> x;
                cout << "NEW"<< "\n";
                v.pb(x);
            }
            if (s[0] == '2')
            {
                for (int i = 0; i < v.size(); i++)
                {
                    cout << v[i] << " ";
                }
                cout << "\n";
                v.clear();
            }
        }
    }
}
