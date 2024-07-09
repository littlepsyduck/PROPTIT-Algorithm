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
		int m, n, a, b;
		cin>>m>>n>>a>>b;
		int cnt=0;
		for(int i=m; i<=n; i++){
			if(i%a==0 || i%b==0) cnt++;
		}
		cout<<cnt;
		cout<<"\n";
	} 
}
