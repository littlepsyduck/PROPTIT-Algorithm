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



int main()
{
	fast();
	int n;
	cin>>n;
	string s, s0;
	cin>>s>>s0;
	int cnt=0; 
	int c=0;
	for(int i=0; i<n; i++){
		if(s[i]<s0[i]){
			int res=s[i];
			s[i]=s0[i];
			s0[i]=res;
		}
		if(s[i]-s0[i]<10+s0[i]-s[i]){
			c=s[i]-s0[i];
		}
		else c=10+s0[i]-s[i];
		cnt+=c;
		c=0;
	}
	cout<<cnt;
}
