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



int main()
{
	fast();
	ll n, r, c;
	cin>>n>>r>>c;
	ll cheo1=r+c-1, cheo2=r-c+n;
	ll ans=0;
	ll d1x=0, d2x=0, d1y=0, d2y=0;
	if(cheo1+1-1>n){
		d1x=n;
		d1y=cheo1+1-n;
		ans=(n-r+1)*(n-r+2)/2;
	}
	else{
		d1x=cheo1+1-1;
		d1y=1;
		ans=(c*(n-r+1))-c*(c+1)/2+c;
	}
	if(cheo2-n+n>n){
		d2x=n;
		d2y=n+n-cheo2;
		ll z=(n-r+1)*(n-r+2)/2;
		ans+=z;
	}
	else{
		d2x=cheo2+n-n;
		d2y=n;
		ll z=0;
		z=n-c+1-(n-c+1)*(n-c+2)/2;
		z=z+(n-c+1)*(n-r+1);
		ans+=z;
	}
	ans=ans+r-1-n;
	cout<<ans;
}
