#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'
#define xb xush_back

using namespace std;

const int Nmaxx = 1e6;

void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}

void solve(){
	int n;
	cin>>n;
	ll ans=n;
	for(int i=1; i<=n-1; i++){
		ll x=n/i;
		ll xx=(ll)n*x-(ll)i*(x+1)*x/2;
		ans=(ans+xx)%mod;
	}
	cout<<ans;
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
