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
    ll k, res=0;
    cin>>k;
    for(int i=0; i<n; i++){
        res+=k/a[i];
        k%=a[i];
    }
    cout<<res;
    }

int main()
{
    fast int t = 1;
    int a[]={1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int n=10;
    cin >> t; cin.ignore();
    process
}