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


ll a[Nmax];
int main()
{
	fast();
	int n;
	while(cin>>n){
		if(n==0) return 0;
		int l=1;
		while(n!=1){
			if(n%2==0) n/=2;
			else n=3*n+1;
			l++;
		}
		cout<<l<<"\n";
	}
}
