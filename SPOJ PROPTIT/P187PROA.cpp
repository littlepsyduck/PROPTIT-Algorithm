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


int a[Nmax];
int main()
{
	fast();
	int n, m, k;
	cin>>n>>m>>k;
	for(int i=1; i<=m; i++){
		int x;
		cin>>x;
		for(int j=max(0, x-k); j<=x+k; j++){
			a[j]=1;
		}
	}
	int cnt=0;
	for(int i=1; i<=n; i++){
		if(a[i]==0){
			cnt++;
			for(int j=0; j<=2*k; j++){
				a[i+j]=1;
			}
		}
	}
	cout<<cnt;
}
