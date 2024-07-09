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


int a[Nmax];
int main()
{
	fast();
	int n, m;
	cin>>n>>m;
	int d0=0, d1=0;
	for(int i=1; i<=n; i++){
		cin>>a[i];
		if(a[i]>0) d1++;
		else d0++;
	}
	for(int i=1; i<=m; i++){
		int l, r;
		cin>>l>>r;
		int x=r-l+1;
		if(x%2==1){
			cout<<0<<"\n";
			continue;
		}
		if(x/2>d0||x/2>d1){
			cout<<0<<"\n";
			continue;
		}
		cout<<1<<"\n";
	}
}
