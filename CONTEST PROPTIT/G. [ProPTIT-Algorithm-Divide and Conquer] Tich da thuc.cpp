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

ll a[Nmax];
ll b[Nmax];
ll c[Nmax];
void solve(){
	ll m;
	cin >> m;
	int n;
	cin>>n;
	memset(c, 0, sizeof(c));
	for(int i=0; i<m; i++){
		cin>>a[i];
	}
	for(int i=0; i<n; i++){
		cin>>b[i];
	}
	for (int i = 0; i <m; i++)
	{
		
		for (int j = 0; j <n; j++)
			c[i+j] += a[i] * b[j];
	}
	for(int i=0; i<m+n-1; i++){
		cout<<c[i]<<" ";
	}
}

int main()
{
	fast();
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<"\n";
	}
} 