#include <bits/stdc++.h>
using namespace std;

long long mod=1e9+7;
int n, k;
long long a[15][15], b[15][15];
 
void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}

void nhan (long long x[15][15], long long y[15][15])
{
	long long z[15][15];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			long long res=0;
			for(int k=0; k<n; k++)
			{
				res+= (x[i][k]*y[k][j])%mod;
				res%=mod;	
			}
			z[i][j]=res;	
		}	
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			a[i][j]=z[i][j]; 
		}	
	}	
} 

void luythua (long long a[15][15], int n)
{
	if(n<=1) return;
	else
	{
		luythua(a, n/2);
		nhan(a, a);
		if(n%2!=0) nhan(a,b); 
	} 
} 

int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				cin>>a[i][j];
				b[i][j]=a[i][j]; 
			} 
		}
		luythua(a,k);
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				cout<<a[i][j]<<" "; 
			}
			cout<<"\n"; 
		}	
	} 
}

