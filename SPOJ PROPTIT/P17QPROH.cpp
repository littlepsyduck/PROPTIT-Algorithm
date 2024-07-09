#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'
#define pb push_back

using namespace std;

const int Nmax = 1e6;

void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}


ll a[Nmax], b[Nmax];
int cmp(ll x, ll y){
	return x>y;
}

int x;
void solve(){
	x++;
	cout<<"Case #"<<x<<": ";
	int n;
	cin>>n;
	for(int i=1; i<=n; i++) cin>>a[i];
	for(int i=1; i<=n; i++) cin>>b[i];
	ll s=0;
	sort(a+1, a+n+1);
	sort(b+1, b+n+1, cmp);
	for(int i=1; i<=n; i++){
		s+=a[i]*b[i];
	}
	cout<<s;
}

int main()
{
	fast();
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<"\n";
	}
}
