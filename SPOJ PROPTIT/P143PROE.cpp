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


int a[Nmax];
int main()
{
	fast();
	string s;
	cin>>s;
	for(int i=0; i<s.size(); i++){
		a[i]=s[i];
	}
	for(int i=s.size()-2; i>=0; i--){
		a[i]=max(a[i+1], (int)s[i]);
	}
	for(int i=0; i<s.size(); i++){
		if(s[i]==a[i]) cout<<s[i];
	}
}
