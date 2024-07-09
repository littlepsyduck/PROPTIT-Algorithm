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

ll transfer(string s){
	ll sum=0;
	int x=0;
	for(int i=s.length()-1; i>=0; i--){
		if(s[i]=='1') sum+=pow(2, x);
		x++;
	}
	return sum;
}

void solve(){
	string s1, s2;
	cin>>s1>>s2;
	ll x1=transfer(s1), x2=transfer(s2);
	cout<<x1*x2;
}

int main()
{
	fast();
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<"\n";
	}
}
