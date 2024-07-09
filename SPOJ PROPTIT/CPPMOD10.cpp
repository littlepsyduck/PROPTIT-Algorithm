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


ll a[2005];
int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		ll n, x;
        cin>>n>>x;
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		ll X=1, s=0;
		for(int i=n-1; i>=0; i--){
			s+=(a[i]*X);
            s%=mod;
			X*=x;
            X%=mod;
		}
		cout<<s;
		cout<<"\n";
	} 
}
