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

ll sum(ll n)
{
	ll s=0;
	ll a = sqrt(n);
    for(ll i=1; i<=sqrt(n); i++){
        if(n%i==0){
            s+=i;
            s+=n/i;
        }  
    }
    if(a*a==n){
        s-=a;
    }     
    return s;
}

int main()
{
	fast();
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		cout<<sum(n)<<"\n";
	}
}
