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


ll bac (ll n, ll p){
    ll ans=0;
    for(ll i=p; i<=n; i*=p){
        ans+=n/i;
    }
    return ans;
}

int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		ll n, p;
		cin>>n>>p;
		cout<<bac(n, p)<<"\n";
	}
}
