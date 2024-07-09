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

int chuso(ll n){
	int c=0; 
	do{
        n/=10;
        c++;
    }while(n>0);
    
    return c;
} 

int main()
{
	fast();
	int t;
	cin>>t;
	while(t--){
		ll a, b;
		cin>>a>>b;
		cout<<a*(chuso(b)-1);
		cout<<"\n";
	}
}
