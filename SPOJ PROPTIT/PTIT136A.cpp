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


map<string, int> m;
int main()
{
	fast();
	int n;
	cin>>n;
	int cnt=0;
	for(int i=1; i<=n; i++){
		string s;
		cin>>s;
		m[s]++;
		if(m[s]-1>i-m[s]) cnt++;
	}
	cout<<cnt;
}
