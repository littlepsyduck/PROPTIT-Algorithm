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


char a[5][5];
int main()
{
	fast();
	for(int i=1; i<=4; i++){
		for(int j=1; j<=4; j++){
			cin>>a[i][j];
		}
	}
	int cnt=0;
	for(int i=1; i<=3; i++){
		for(int j=1; j<=3; j++){
			int cnt1=0, cnt2=0;
			if(a[i][j]=='.') cnt1++;
			else cnt2++;
			if(a[i][j+1]=='.') cnt1++;
			else cnt2++;
			if(a[i+1][j]=='.') cnt1++;
			else cnt2++;
			if(a[i+1][j+1]=='.') cnt1++;
			else cnt2++;
			if(cnt1>=3||cnt2>=3) cnt++;
			if(cnt!=0) break;
		}
		if(cnt!=0) break;
	}
	if(cnt!=0) cout<<"YES";
	else cout<<"NO";
}
