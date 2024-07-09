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

void solve(){
	ll xi, yi, xw, yw;
	cin>>xi>>yi>>xw>>yw;
	ll r;
	cin>>r;
	double d=sqrt((xi-xw)*(xi-xw)+(yi-yw)*(yi-yw));
	int x=ceil(d/(2*r));
	cout<<x;
}

int main()
{
	fast();
	solve();
	
}
