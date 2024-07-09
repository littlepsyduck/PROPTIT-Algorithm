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


int b[Nmax];
int a[Nmax];
int main()
{
	fast();
	int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>b[i];
	}
	a[1]=b[1];
	for(int i=2; i<=n; i++){
		a[i]=i*b[i]-(i-1)*b[i-1];
	}
	for(int i=1; i<=n; i++){
		cout<<a[i]<<" ";
	}
}
