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
	int n, m;
	cin>>n>>m;
	int x=n%m;
	if(x==0) cout<<0;
	else{
		int cnt=0;
		int b=n*m/__gcd(n, m);
		int p=b/m, px=b/n, x=0;
		while(m--){
			while(x<p){
				x+=px;
			}
			if(x==p) x=0;
			else{
				cnt++;
				x-=p;
			}
		}
		cout<<cnt;
	} 
}
