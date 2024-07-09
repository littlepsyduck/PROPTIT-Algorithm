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

int n, k;
int x=mod;
int a[Nmax];
void check(int l, int r){
	if(l>r) return;
	else{
		int m=(l+r)/2;
		int cnt=0;
		for(int i=1; i<=n; i++){
			if(a[i]<=m) cnt++;
		}
		if(cnt>=k){
			if(cnt==k) x=m;
			check(l, m-1);
		}
		else check(m+1, r);
	}
}

int main()
{
	fast();
	cin>>n>>k;
	int maxx=0;
	for(int i=1; i<=n; i++){
		cin>>a[i];
		maxx=max(maxx, a[i]);
	}
	check(1, maxx);
	if(x==mod) cout<<-1;
	else cout<<x;
}
