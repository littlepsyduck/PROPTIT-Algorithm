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
	int n;
	cin>>n;
	ll s=0;
	int x=0;
	for(int i=0; i<n; i++){
		cin>>a[i];
		s+=a[i];
	}
	int cnt=0;
	if(s%n==0){
		s/=n;
		for(int i=0; i<n; i++){
			if(a[i]>s) cnt++;
		}
		cout<<cnt;
		x++;
	}
	if(x==0) cout<<1;
	
}
