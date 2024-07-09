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

ll find(char n[], ll m)
{
	ll res=0;
	for(int i=0; i<strlen(n); i++)
	{
		res=(res*10)+n[i]-'0';
		res%=m;
	}
	return res;
}

int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		char n[1005];
		ll m;
		cin>>m>>n;
		ll du=find(n, m);
		cout<<ucln(m, du)<<"\n";
	}
}
