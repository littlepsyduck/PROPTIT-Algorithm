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

ll luythua(ll x, ll y, ll z){
    if(y==0) return 1;
    ll d=luythua(x, y/2, z);
    if(y%2==0) return (d*d)%z;
    else return ((d*d)%z*x)%z;
}

ll giaithua(int x){
    ll s=1;
    for(int i=1; i<=x; i++){
        s*=i;
        s%=mod;
    }
    return s;
}

int main()
{
	fast();
	int t;
	cin>>t;
	while(t--){
		int n, r;
		cin>>n>>r;
		ll x=1, y=1;
		x=giaithua(n)%mod;
        y=giaithua(r)%mod;
		for(int i=1; i<=(n-r); i++){
			y*=i;
			y%=mod;
		}
		cout<<(x*luythua(y, mod-2, mod))%mod<<"\n";
	}
}
