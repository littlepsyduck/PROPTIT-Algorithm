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


char a[105][105];
int main()
{
	fast();
	int n, m;
	cin>>n>>m;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cin>>a[i][j];
			a[i][j+2*(m-j)+1]=a[i][j];
		}
	}
	for(int i=2*n; i>n; i--){
		for(int j=1; j<=2*m; j++){
			a[i][j]=a[i+2*(n-i)+1][j];
		}
	}
	int x, y;
	cin>>x>>y;
	if(a[x][y]=='.') a[x][y]='#';
	else a[x][y]='.';
	for(int i=1; i<=2*n; i++){
		for(int j=1; j<=2*m; j++){
            
			cout<<a[i][j];
		}
		cout<<"\n";
	}
}
