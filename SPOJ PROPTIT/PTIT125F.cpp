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
	int n;
	cin>>n;
	int sum1=0, sum2=0, maxu=Nmax, maxd=Nmax;
	for(int i=1; i<=n; i++){
		int u, d;
		cin>>u>>d;
		if(u<maxu) maxu=u;
	    if(d<maxd) maxd=d;
        sum1+=u;
		sum2+=d;
	}
	int x=maxu+sum2;
	int y=maxd+sum1;
	if(x<y) cout<<y;
	else cout<<x;

}
