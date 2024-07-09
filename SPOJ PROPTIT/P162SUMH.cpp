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
	int cnt=0;
	for(int i='A'; i<='C'; i++) a[i]=3;
	for(int i='D'; i<='F'; i++) a[i]=4;
	for(int i='G'; i<='I'; i++) a[i]=5;
	for(int i='J'; i<='L'; i++) a[i]=6;
	for(int i='M'; i<='O'; i++) a[i]=7;
	for(int i='P'; i<='S'; i++) a[i]=8;
	for(int i='T'; i<='V'; i++) a[i]=9;
	for(int i='W'; i<='Z'; i++) a[i]=10;
	for(int i=0; i<s.size(); i++){
		cnt+=a[s[i]];
	}
	cout<<cnt;
}
