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

int sonen (ll n) {
	ll s=0; 
	while(n>0){
		ll a=n%10;
		s+=a;
		n/=10; 
	} 
	return s; 
}

int main()
{
	fast();
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n; 
		while(n>=10) n=sonen(n);
		cout << n << "\n"; 
	} 
}
