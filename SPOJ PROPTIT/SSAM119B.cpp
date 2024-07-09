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
	int t;
	cin>>t;
	while(t--){
		ll n;
		ll k;
		cin>>n>>k;
		ll x;
		for(int i=1; i<50; i++){
			n=pow(2, i-1);
			if(k%n!=0){
				x=i-1;
				cout<<x<<"\n";
                break;
			}
		}
	}
}
