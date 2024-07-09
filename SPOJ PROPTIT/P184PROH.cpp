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


ll a[Nmax];
int main()
{
	fast();
	int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	ll x=0;
	ll j=a[n];
	for(int i=n-1; i>=1; i--){
		j=max(j, a[i]);
		x=max(x, j-a[i]);
	}
	cout<<x;
}
