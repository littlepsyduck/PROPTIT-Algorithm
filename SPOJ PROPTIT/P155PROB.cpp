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
	int x, s;
	cin>>x>>s;
	ll bet=x*s;
	for(int i=1; i<=5; i++){
		int a;
		cin>>a;
		cout<<a-bet<<" ";
	}
}
