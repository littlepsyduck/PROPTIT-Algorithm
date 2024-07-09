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


int d[Nmax];
int main()
{
	fast();
	int n, l;
	cin>>n>>l;
	int t=0;
	for(int i=1; i<=n; i++){
		cin>>d[i];
		int r, g;
		cin>>r>>g;
		t+=d[i]-d[i-1];
		int x=t%(r+g);
		if(x<r) t+=(r-x);
	}
	cout<<t+(l-d[n]);
}
