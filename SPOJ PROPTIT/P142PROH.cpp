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


int a[20][20];
char c[20][20];
int main()
{
	fast();
	int n, m;
	cin>>n>>m;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cin>>c[i][j];
		}
	}
	for(int i=1; i<=n; i++){
		int check=0;
		for(int j=1; j<=m; j++){
			if(c[i][j]=='S'){
				check=1;
				break;
			}
		}
		if(check==0){
			for(int j=1; j<=m; j++){
				a[i][j]=1;
			}
		}
	}
	for(int j=1; j<=m; j++){
		int check=0;
		for(int i=1; i<=n; i++){
			if(c[i][j]=='S'){
				check=1;
				break;
			}
		}
		if(check==0){
			for(int i=1; i<=n; i++){
				a[i][j]=1;
			}
		}
	}
	int cnt=0;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(a[i][j]==1) cnt++;
		}
	}
	cout<<cnt;

}
