#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	cout.tie(0);
	ll n, r, c, k;
	cin>>n>>r>>c>>k;
	ll Max=-1e9, Min=1e9;
	ll a[r+5][c+5], b[r+5][c+5];
	for(ll i=0; i<r; i++){
		for(ll j=0; j<c; j++) {
			cin>>a[i][j];
			b[i][j]=a[i][j];
			Max=max(Max, a[i][j]);
			Min=min(Min, a[i][j]);
		}
	}
	while(k--){
		for(ll i=0; i<r; i++){
			for(ll j=0; j<c; j++){
				if(a[i][j]==a[i+1][j]-1){
					 b[i+1][j]=a[i][j];
				}
				if(a[i][j]==a[i-1][j]-1){
					 b[i-1][j]=a[i][j];
				}
				if(a[i][j]==a[i][j+1]-1){
					 b[i][j+1]=a[i][j];
				}
				if(a[i][j]==a[i][j-1]-1){
					 b[i][j-1]=a[i][j];
				}
				if(a[i][j]==Max){
					if(a[i+1][j]==Min){
					 b[i+1][j]=Max;
					}
					if(a[i-1][j]==Min){
					 b[i-1][j]=Max;
					}
					if(a[i][j+1]==Min){
					 b[i][j+1]=Max;
					}
					if(a[i][j-1]==Min){
					 b[i][j-1]=Max;
					}
				}
				
			}
		}
		for(ll i=0; i<r; i++){
			for(ll j=0; j<c; j++){
				a[i][j]=b[i][j];
			}
		}
	}
	ll cnt[1005]={0};
	for(ll i=0; i<r; i++){
			for(ll j=0; j<c; j++){
				cnt[b[i][j]]++;
			}
	}
	ll ma=-1e9, f;
	for(ll i=0; i<=Max; i++){
		if(cnt[i]>ma){
			ma=cnt[i];
			f=i;
		}
	}
	cout<<f;
	

	return 0;
}
