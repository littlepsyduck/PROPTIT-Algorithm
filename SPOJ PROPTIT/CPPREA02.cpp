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


ll a[10000007];
int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int cnt=0;
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			if(a[i]!=0) cout<<a[i]<<" ";
			else cnt++;
		}
		for(int i=0; i<cnt; i++){
			cout<<0<<" ";
		}
		cout<<"\n";
	} 
}
