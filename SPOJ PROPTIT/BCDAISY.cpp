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

int n, m;
vector<vector<int>> a(255);
int cnt[255];
void dfs(int x){
	cnt[x]=1;
	for(auto i : a[x]){
		if(cnt[i]==0){
			dfs(i);
		}
	}
}

int main()
{
	fast();
	cin>>n>>m;
	int c1, c2;
	for(int i=1; i<=m; i++){
		cin>>c1>>c2;
		a[c1].pb(c2);
		a[c2].pb(c1);
	}
	dfs(1);
	int check=0;
	for(int i=1; i<=n; i++){
		if(cnt[i]==0){
			check++;
			cout<<i<<"\n";
		}
	}
	if(check==0)  cout<<0;
}
