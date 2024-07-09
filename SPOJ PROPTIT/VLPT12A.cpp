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

int a[105][105];
void solve(){
	int x, y;
	cin>>x>>y;
	for(int i=1; i<=y; i++){
		for(int j=1; j<=x; j++){
			cin>>a[i][j];
		}
	}
	ll sum=mod;
	for(int i=1; i<=y; i++){
		for(int j=1; j<=x; j++){
			ll s=0;
			for(int k=1; k<=y; k++){
				for(int z=1; z<=x; z++){
					s+=(abs(i-k)+abs(j-z))*a[k][z];
				}
				
			}
			sum=min(sum, s);
		}
	}
	cout<<sum;
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
