#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'

using namespace std;

const int Nmax = 1e6;

void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}



int main()
{
	fast();
	int r,c,cnt=0;
	cin>>r>>c;
	char a[r+5][c+5]={};
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			if(a[i][j]=='#'){
				a[i][j]='.';
				if(a[i][j-1]=='#') 
					a[i][j-1]='.';
				else if(a[i][j+1]=='#') 
					a[i][j+1]='.';
				else if(a[i-1][j]=='#') 
					a[i-1][j]='.';
				else if(a[i+1][j]=='#') 
					a[i+1][j]='.';
				cnt++;
			}
		}
	}
	cout<<cnt;
	
}
