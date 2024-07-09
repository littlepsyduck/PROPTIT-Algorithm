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



int main()
{
	fast();
	ll a, b;
	cin>>a>>b;
	if(a<b) swap(a, b);
	ll cnt=0;
	while(a%b!=0){
		cnt+=a/b;
		a%=b;
		ll x=a;
		a=b;
		b=x;
	}
	cout<<cnt+a/b;
}
