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
	int cnt=0, c=0;
	for(int i=0; i<s.size(); i++){
		if(s[i]=='L') cnt++;
		else if(s[i]=='R') cnt--;
		else c++;
	}
	if(cnt>0) cout<<cnt+c;
	else cout<<abs(cnt-c);
}
