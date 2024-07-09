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

ll mulmod(ll a,ll b,ll c){
    if (b==0) return 0;
    ll s=mulmod(a, b/2, c);
	if (b%2==0) return (2*(s%c))%c;
	else return (a%c+2*(s%c))%c;
}

int main()
{
	fast();
	int t;
	cin>>t;
	while(t--){
		ll a, b, c;
		cin>>a>>b>>c;
		cout<<mulmod(a, b, c)<<"\n";
	}
}
