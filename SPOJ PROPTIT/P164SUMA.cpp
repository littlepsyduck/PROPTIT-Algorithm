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
	string s0;
	cin>>s0;
	string s;
	int a=1, b=0;
	for(int i=1; i<n; i++){
		cin>>s;
		if(s==s0) a++;
		else b++;
	}
	if(a>b) cout<<s0;
	else cout<<s;
}
