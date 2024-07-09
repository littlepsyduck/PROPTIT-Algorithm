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

string solve(int n){
	string s="";
	while(n!=0){
		s=char(n%3+'0')+s;
		n/=3;
	}
	return s;
}

int main()
{
	fast();
	int a, c;
	cin>>a>>c;
	string s1=solve(a), s2=solve(c);
	while(s1.size()<s2.size()) s1='0'+s1;
	while(s1.size()>s2.size()) s2='0'+s2;
	string s="";
	for(int i=0; i<s1.size(); i++){
		int j=s2[i]-s1[i];
		if(j<0) j+=3;
		s=s+char(j+'0');
	}
	int x=1;
	int sum=0;
	for(int i=s.size()-1; i>=0; i--){
		sum+=(s[i]-'0')*x;
		x*=3;
	}
	cout<<sum;
}
