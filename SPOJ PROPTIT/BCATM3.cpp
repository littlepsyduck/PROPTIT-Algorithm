#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'

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
		int n,s=0;
		cin>>n;
		while(n>=500)
		{
			n-=500;
			s++;
		}
		while(n>=200)
		{
			n-=200;
			s++;
		}
		while(n>=100)
		{
			n-=100;
			s++;
		}
		while(n>=50)
		{
			n-=50;
			s++;
		}
		while(n>=20)
		{
			n-=20;
			s++;
		}
		while(n>=10)
		{
			n-=10;
			s++;
		}
		while(n>=5)
		{
			n-=5;
			s++;
		}
		while(n>=2)
		{
			n-=2;
			s++;
		}
		while(n>=1)
		{
			n-=1;
			s++;
		}
		cout<<s;
		cout<<"\n";
	} 
}
