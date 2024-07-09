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


char a[105][105];
int main()
{
	fast();
	int n;
	cin>>n;
	ll cnt=0;
	for(int i=1; i<=n; i++){
		int c=0;
		for(int j=1; j<=n; j++){
			cin>>a[i][j];
			if(a[i][j]=='C') c++;
		}
		cnt+=(c-1)*c/2;
	}
	for(int i=1; i<=n; i++){
		int c=0;
		for(int j=1; j<=n; j++){
			if(a[j][i]=='C') c++;
		}
		cnt+=(c-1)*c/2;
	}
	cout<<cnt;
}
