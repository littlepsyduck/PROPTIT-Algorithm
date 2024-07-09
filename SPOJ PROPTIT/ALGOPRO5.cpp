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

int main()
{
	fast();
	int n;
	cin>>n;
	ll cnt=0;
	for(int i=1;i<=n;i++){
		ll m=1;
		for(int j=1;j<=i;j++){
			m*=2;
		}
		cnt+=m;
	}
	cout<<cnt;
}
