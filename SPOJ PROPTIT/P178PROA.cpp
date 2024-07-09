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
	int n;
	while(cin>>n){
		if(n==0) return 0;
		else{
			if(n<1000000) cout<<n;
			else if(n>1000000&&n<=5000000) cout<<n*9/10;
			else cout<<n*8/10;
			cout<<"\n";
		}
	}
}
