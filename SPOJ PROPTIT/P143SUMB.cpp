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
	int n, m;
	cin>>n>>m;
	for(int i=1; i<=m; i++){
		cin>>a[i];
	}
	sort(a+1, a+m+1);
	int j=a[1], res=0, k=1;
	for(int i=1; i<=n; i++){
		res+=j;
		j--;
		if(j==0) j=a[++k];
	}
	int ans=0;
	for(int i=1; i<=n; i++){
		ans+=a[m];
		a[m]--;
		sort(a+1, a+m+1);
	}
	cout<<ans<<" "<<res;
}
