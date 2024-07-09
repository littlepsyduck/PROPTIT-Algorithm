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


ll a[Nmax], b[Nmax];
int main()
{
	fast();
	int n, m;
	cin>>n>>m;
	for(int i=1; i<=n; i++){
		if(i%5==0) a[0]++;
		else if(i%5==1) a[1]++;
		else if(i%5==2) a[2]++;
		else if(i%5==3) a[3]++;
		else a[4]++;
	}
	for(int i=1; i<=m; i++){
		if(i%5==0) b[0]++;
		else if(i%5==1) b[1]++;
		else if(i%5==2) b[2]++;
		else if(i%5==3) b[3]++;
		else b[4]++;
	}
	cout<<a[0]*b[0]+a[1]*b[4]+a[2]*b[3]+a[3]*b[2]+a[4]*b[1];
}
