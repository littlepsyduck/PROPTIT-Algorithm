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


int main()
{
	fast();
	int n, m;
	cin>>n>>m;
	int x=n/2;
	int x2=0;
	if(n%2!=0) x2=1;
	int y=(x+x2)%m;
	if(y==0) cout<<x+x2;
	else{
		y=m-y;
		x2+=y*2;
		x-=y;
		if(x<0) cout<<-1;
		else cout<<x+x2;
	}
}
