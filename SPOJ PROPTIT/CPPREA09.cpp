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


ll a[100005];
int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		cout<<a[0]*a[1]<<" ";
		for(int i=1; i<n-1; i++){
			cout<<a[i-1]*a[i+1]<<" ";
		}
		cout<<a[n-2]*a[n-1];
		cout<<"\n";
	} 
}
