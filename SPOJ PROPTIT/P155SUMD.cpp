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
int f[Nmax];
pair<int, int> b[Nmax];
int main()
{
	fast();
	int n, m;
	cin>>n>>m;
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	for(int i=1; i<=m; i++){
		cin>>b[i].first;
		b[i].second=i;
	}
	sort(a+1, a+n+1);
	sort(b+1, b+m+1);
	int i=1, j=1;
	int d=0;
	while(i<=m){
		f[b[i].second]=d;
		while(a[j]<=b[i].first&&j<=n){
			f[b[i].second]++;
			j++;
		}
		d=f[b[i].second];
		i++;
	}
	for(int i=1; i<=m; i++){
		cout<<f[i]<<"\n";
	}
}
