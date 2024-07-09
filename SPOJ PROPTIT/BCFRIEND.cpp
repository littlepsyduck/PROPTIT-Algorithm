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


map<ll, ll> m;
int main()
{
	fast();
	ll n, b;
	cin>>n>>b;
	ll t=0;
	for(int i=1; i<=n; i++){
		ll s;
		cin>>s;
		t+=m[b-s];
		m[s]++;
	}
	cout<<t;
}
