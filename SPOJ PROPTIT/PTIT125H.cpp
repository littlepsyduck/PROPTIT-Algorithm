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
		int n;
		cin>>n;
		string s;
		cin>>s;
		int cnt=0, x=0;
		while(x<n){
			if(s[x]=='S') x+=1;
			else x+=2;
			cnt++;
		}
		cnt++;
		if(cnt<n) cout<<cnt;
		else cout<<n;
		cout<<"\n";
	
}
