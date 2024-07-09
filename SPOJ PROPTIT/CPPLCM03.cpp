#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'

using namespace std;

const int Nmax = 1e6;

void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}

ll ucln (ll a, ll b) {
	if(b==0) return a;
	return ucln(b, a%b);
}

ll powmod(ll n,ll m){
	if(m==1) return n;
	if(m%2==0) return (powmod(n,m/2)*powmod(n,m/2))%mod;
	else return (n*powmod(n,m-1))%mod;
}

int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		ll a[n];
		for(int i=0;i<n;i++) 
            cin>>a[i];
		ll u=a[0],x=1;
		for(int i=1;i<n;i++){
			u=ucln(u,a[i]);
		}
		for(int i=0;i<n;i++){
			x*=a[i];
			x%=mod;
		}
		x%=mod;
		x=powmod(x,u);
		cout<<x<<"\n";
	}
}
