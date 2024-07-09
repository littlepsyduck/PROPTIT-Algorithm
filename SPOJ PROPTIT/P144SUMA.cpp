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
	string s[100005];
	for(int i=1; i<=n; i++){
		cin>>s[i];
	}
	int cnt=1;
	for(int i=2; i<=n; i++){
		if(s[i]!=s[i-1]) cnt++;
	}
	cout<<cnt;
}
