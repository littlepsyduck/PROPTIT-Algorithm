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
int b[1005];
int main()
{
	fast();
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
		}
	}
	b[0]=(a[1][0]+a[2][0]-a[2][1])/2;
	cout<<b[0]<<" ";
	for(int j=1; j<n; j++){
		b[j]=a[0][j]-b[0];
	}
	for(int j=1; j<n; j++){
		cout<<b[j]<<" ";
	}
}
