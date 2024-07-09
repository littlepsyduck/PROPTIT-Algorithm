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
	ll x0=luythua(x, y/2, z);
	if(y%2==0) return (x0*x0)%z;
	else return ((x0*x0)%z*x)%z;
}

int main()
{
	fast();
	int n;
	cin>>n;
	cout<<luythua(1378, n, 10);
}
