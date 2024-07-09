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
	ll l1, r1, l2, r2, k;
	cin>>l1>>r1>>l2>>r2>>k;
	if(l1>l2){
		swap(l1, l2);
		swap(r1, r2);
	}
	if(l2>r1||r2<l1){
		cout<<0;
		return 0;
	}
	else{
		ll l=l2, r=min(r1, r2);
		if(l<=k&&k<=r) cout<<r-l;
		else cout<<r-l+1;
	}
}
