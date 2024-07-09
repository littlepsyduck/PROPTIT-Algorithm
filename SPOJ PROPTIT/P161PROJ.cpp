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


ll m;
ll s;
int main()
{
	fast();
	int n;
	cin>>n;
	int a[n+5];
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	for(int i=1; i<n; i++){
		for(int j=i+1; j<=n; j++)
        {
			s=((i & j) ^ (i | j)) & (i ^ j);
			if(s>m) m=s;
		}
	}
	cout<<m;
}
