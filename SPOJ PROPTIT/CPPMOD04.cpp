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

int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		ll n, k, k0;
		cin>>n>>k;
		int cnt=n/k;
		if(cnt<1){
			k0=(n+1)*n/2;
		}
        else
        {
			ll x=cnt*(k+1)*k/2;
			ll y=n-(cnt*k);
			ll z=(y+1)*y/2;
			k0=x+z;
		}
		if(k0==k) cout<<1;
		else cout<<0;
		cout<<"\n";

	} 
}
