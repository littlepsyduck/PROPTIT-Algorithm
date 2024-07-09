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
	a['0']=2;
	a['1']=7;
	a['2']=2;
	a['3']=3;
	a['4']=3;
	a['5']=4;
	a['6']=2;
	a['7']=5;
	a['8']=1;
	a['9']=2;
	string s;
	cin>>s;
	int x=a[s[0]]*a[s[1]];
	cout<<x;

}
