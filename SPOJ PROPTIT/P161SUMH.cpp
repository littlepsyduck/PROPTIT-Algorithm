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
	int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>a[i][j];
		}
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			int cnt=0;
			if(a[i-1][j]=='o') cnt++;
			if(a[i][j-1]=='o') cnt++;
			if(a[i+1][j]=='o') cnt++;
			if(a[i][j+1]=='o') cnt++;
			if(cnt%2!=0){
				cout<<"NO";
				return 0;
			}
		}
	}
	cout<<"YES";
}
