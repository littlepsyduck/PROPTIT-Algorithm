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

ll bcnn (ll a, ll b) {
	return a/ucln(a, b)*b;
}

int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		ll n, m;
		cin>>n>>m;
		ll s=(n+1)*n/2;
		ll a=(s+m)/2;
		ll b=s-a;
		if(a-b!=m||ucln(a, b)!=1) cout<<"No"<<"\n";
		else cout<<"Yes"<<"\n";
	}
}
