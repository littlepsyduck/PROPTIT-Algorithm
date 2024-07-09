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
	while(t--)
	{
		double n, l, m;
		cin>>n>>l>>m;
		int cnt=0;
		while(n<m)
		{
			n=n*(1+l/100);
			cnt++;
		}
		cout<<cnt;
		cout<<"\n";
	} 
}
