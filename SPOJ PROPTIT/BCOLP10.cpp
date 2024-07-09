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
	string a, b;
	cin>>a>>b;
	int l1=a.size(), l2=b.size();
	int n=0;
	if(l1>l2) n=l1;
	else n=l2;
	int s[n+5][n+5];
	memset(s, 0, sizeof s);
	for(int i=0; i<l1; i++){
		for(int j=0; j<l2; j++){
			if(a[i]==b[j]) s[i+1][j+1]=s[i][j]+1;
			else s[i+1][j+1]=max(s[i][j+1], s[i+1][j]);
		}
	}
	cout<<l1+l2-2*s[l1][l2];
}
