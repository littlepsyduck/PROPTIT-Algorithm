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
		ll n, k;
		cin>>n>>k;
		int cnt=n/k;
		if(cnt<1){
			cout<<(n+1)*n/2<<"\n";
		}
        else
        {
			ll x=cnt*(k+1)*k/2;
			ll y=n-(cnt*k);
			ll z=(y+1)*y/2;
			cout<<x+z<<"\n";
		}
		

	} 
}
