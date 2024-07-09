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

int n;
ll k;
ll a[15][15], b[15][15];
void mul(ll x[15][15], ll y[15][15]){
	ll tmp[15][15];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			ll res=0;
			for(int k=0; k<n; k++){
				res+=(x[i][k]*y[k][j])%mod;
				res%=mod;
			}
			tmp[i][j]=res;
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			a[i][j]=tmp[i][j];
		}
	}
}

void power(ll a[15][15], int n){
	if(n<=1){
		return;
	}
	power(a, n/2);
	mul(a, a);
	if(n&1) mul(a, b);
}

void solve(){
	cin>>n>>k;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
			b[i][j]=a[i][j];
		}
	}
	power(a, k);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}

int main()
{
	fast();
	int t;
	cin>>t;
	while(t--){
		solve();
		
	}
}
