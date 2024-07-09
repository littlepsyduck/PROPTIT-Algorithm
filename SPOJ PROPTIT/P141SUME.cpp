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


int a[1005];
char c[1005][1005];
int main()
{
	fast();
	int n;
	cin>>n;
	int d=0, x=0, k=0;
	for(int i=1; i<=n; i++){
		cin>>a[i];
		k+=a[i];
		if(i%2==0) d-=a[i];
		else d+=a[i];
		x=max(x, d);
	}
	int y=1;
	for(int i=1; i<=n; i++){
		if(i%2==0){
			while(a[i]--){
				c[x][y]='\\';
				x++;
				y++;
			}
			x--;
			y--;
		}
		else{
			while(a[i]--){
				c[x][y]='/';
				x--;
				y++;
			}
			x++;
			y--;
		}
		y++;
	}
	for(int i=1; ; i++){
		int check=0;
		for(int j=1; j<=k; j++){
			if(c[i][j]=='/'||c[i][j]=='\\'){
				check=1;
				break;
			}
		}
		if(check==0) break;
		for(int j=1; j<=k; j++){
			if(c[i][j]=='/'||c[i][j]=='\\') cout<<c[i][j];
			else cout<<" ";
		}
		cout<<"\n";
	}
}
