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
	
		int m, n, k;
		cin>>m>>n>>k;
		int cnt=0;
		while(k--){
			if(n>m/2) n--;
			else m--;
		}
        if(m+n<3&&m<2)  cnt=0;
		else if(m/2<=n) cnt=m/2;
		else if(m/2>=n) cnt=n;
		cout<<cnt;
	
}
