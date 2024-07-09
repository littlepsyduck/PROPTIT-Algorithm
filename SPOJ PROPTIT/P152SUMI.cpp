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


int k[Nmax];
int main()
{
	fast();
	string s;
	cin>>s;
	int l=s.size();
	s=' '+s;
	for(int i=1; i<l; i++){
		k[i]=k[i-1];
		if(s[i]==s[i+1]) k[i]++;
	}
	k[l]=k[l-1];
	int t;
	cin>>t;
	while(t--)
	{
		int x, y;
		cin>>x>>y;
		cout<<k[y-1]-k[x-1];
		cout<<"\n";
	} 
}
