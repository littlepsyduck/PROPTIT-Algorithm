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


int a[1005][1005];
int main()
{
	fast();
	int m, n;
	cin>>m>>n;
	for(int i=1; i<=m; i++){
		for(int j=1; j<=n; j++){
			cin>>a[i][j];
		}
	}
	ll s=0;
	for(int i=0; i<=m; i++){
		for(int j=0; j<=n; j++){
			s+=abs(a[i][j+1]-a[i][j]);
			s+=abs(a[i+1][j]-a[i][j]);
		}
	}
	s+=m*n;
	cout<<s;
}
