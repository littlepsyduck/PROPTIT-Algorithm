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

ll ucln (ll a, ll b) {
	if(b==0) return a;
	return ucln(b, a%b);
}

ll bcnn (ll a, ll b) {
	return a/ucln(a, b)*b;
}

ll s;
int main()
{
	fast();
	
	ll n;
	cin>>n;
	if(n==1||n==2) cout<<n;	
	else if(n<200)
    {
        for(ll i=1;i<n-1;i++){
			for(ll j=i+1;j<n;j++){
				for(ll k=j+1;k<=n;k++){
					if(bcnn(i,bcnn(j,k))>s) s=bcnn(i,bcnn(j,k));
				}
			}
		}
		cout<<s;
    }
    else
    {
        for(ll i=n-199;i<n-1;i++){
			for(ll j=i+1;j<n;j++){
				for(ll k=j+1;k<=n;k++){
					if(bcnn(i,bcnn(j,k))>s) s=bcnn(i,bcnn(j,k));
				}
			}
		}
		cout<<s;
    }
}
