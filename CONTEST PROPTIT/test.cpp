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


int n;
void solve()
{
    bool check=true;
	cin>>n;
	vector<int> a(n), b(n);
	for(int i=0; i<n; i++){
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b.begin(), b.end());
	for(int i=0; i<n; i++){
		if(a[i]!=b[i]&&a[i]!=b[n-i-1]){
			check=false;
			break;
		}
	}
	if(check) cout<<"Yes";
	else cout<<"No";
}

int main()
{
    fast int t = 1;
    cin >> t; cin.ignore();
    process
}