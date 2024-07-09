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

ll a[Nmax];
ll b[Nmax];
ll c[Nmax];
ll d[Nmax];
void solve(){
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
		b[i]=b[i-1]+abs(a[i]);
		c[i]=c[i-1]+a[i];
	}
	for(int i=0; i<n; i++){
		d[i]=b[i]+c[i];
	}
	ll maxx=-1e9;
	for(int i=0; i<n; i++){
		if(d[i]>maxx){
			maxx=d[i];
		}
	}
	cout<<maxx;
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
