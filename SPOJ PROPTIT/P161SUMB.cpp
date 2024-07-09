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


int a[Nmax], b[Nmax];
int main()
{
	fast();
	int n, m;
	cin>>n>>m;
	for(int i=0; i<n+1; i++){
		cin>>a[i];
	}
	for(int i=0; i<m+1; i++){
		cin>>b[i];
	}
	if(n<m){
		cout<<"0/1";
		return 0;
	}
	if(n>m){
		if(a[0]*b[0]>0) cout<<"Infinity";
		else cout<<"-Infinity";
		return 0;
	}
	else{
		if(a[0]*b[0]>0) cout<<abs(a[0])/__gcd(abs(a[0]), abs(b[0]))<<"/"<<abs(b[0])/__gcd(abs(a[0]), abs(b[0]));
		else cout<<"-"<<abs(a[0])/__gcd(abs(a[0]), abs(b[0]))<<"/"<<abs(b[0])/__gcd(abs(a[0]), abs(b[0]));
	}
}
