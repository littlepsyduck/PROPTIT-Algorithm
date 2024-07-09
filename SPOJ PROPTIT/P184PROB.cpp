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
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	sort(a+1, a+n+1);
	if(n%2!=0){
		cout<<a[n/2+1];
	}
	else{
		ll x1=a[n/2], x2=a[n/2+1];
		ll d1=0, d2=0;
		for(int i=1; i<=n; i++){
			if(i!=n/2) d1+=(x1-a[i]);
			if(i!=n/2+1) d2+=(x2-a[i]);
		}
		if(d1>d2) cout<<x2;
		else cout<<x1;
	}
}
