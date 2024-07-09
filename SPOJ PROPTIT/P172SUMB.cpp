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
	string s;
	cin>>s;
	ll cnt=0;
	if((s[0]-'0')%4==0) cnt++;
	for(int i=1; i<s.size(); i++){
		int x=s[i-1]-'0';
		int y=s[i]-'0';
		if(y%4==0) cnt++;
		x=x*10+y;
		if(x%4==0) cnt+=i;
	}
	cout<<cnt;
}