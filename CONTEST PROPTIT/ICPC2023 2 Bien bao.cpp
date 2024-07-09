#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin .tie(0);
#define fi first 
#define se second
#define pic pair<char,int>
const ll mod=1e9+7;
void solve() {
    long N, K;
    cin>>N>>K;
    string s;
    cin>>s;
    int len=s.size();
    stack <int> S;
    for (long i=0; i<len; i++)
    {
        char tmp_char;
        cin>>tmp_char;
        int tmp_int = tmp_char - '0';
        if (S.empty())
        {
            S.push(tmp_int);
        }
        else
        {
            while (!S.empty() && tmp_int > S.top() && K>0)
            {
                S.pop();
                K--;
            }
            S.push(tmp_int);
        }
    }
    while (K>0 && !S.empty())
    {
        S.pop();
        K--;
    }
    vector <int> smallest;
    while (!S.empty())
    {
        int tmp=S.top();
        S.pop();
        smallest.push_back(tmp);
    }
    for (long i=smallest.size()-1; i>=0; i--)
        cout<<smallest[i];
    return 0;
} 
int main() {
    faster();
    int t=1;
    // cin >> t; cin.ignore();
    while(t--) {
        solve();
    }
}