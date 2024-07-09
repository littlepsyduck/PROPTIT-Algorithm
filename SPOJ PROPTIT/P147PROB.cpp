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


double a[1005];
int main()
{
	fast();
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
		cin>>a[i];
		a[i]+=a[i-1];
	}
	cout<<fixed<<setprecision(12)<<a[t-1]/t;
}
