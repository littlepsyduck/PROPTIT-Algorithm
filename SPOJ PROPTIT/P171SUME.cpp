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
	cin>>n;
	ll maxx=-Nmax;
	for(int i=1; i<=n; i++){
		cin>>a[i];
		maxx=max(maxx, a[i]);
	}
	ll s=0;
	if(maxx>0){
		for(int i=1; i<=n; i++){
			s+=a[i];
            if(s<=0) s=0;
			maxx=max(maxx, s);
		}
	}
	cout<<maxx<<" ";
	sort(a+1, a+n+1);
	ll s2=a[n];
	for(int i=n-1; i>=1; i--){
		if(a[i]>0) s2+=a[i];
		else break;
	}
	cout<<s2;
}
