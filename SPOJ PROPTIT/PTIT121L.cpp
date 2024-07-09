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
	ll a, b;
	ll maxx=0;
	ll s=0;
	for(int i=1; i<=3; i++){
		cin>>a>>b;
		s+=a*b;
		maxx=max(a, maxx);
		maxx=max(b, maxx);
	}
	if(s==maxx*maxx) cout<<maxx;
	else cout<<0;
}
