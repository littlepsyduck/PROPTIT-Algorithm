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
	int t[15]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int x, y;
	cin>>x>>y;
	int a=t[x];
	int s=0;
	if(y!=1){
		s++;
		a-=8-y;
		s+=a/7;
		if(a%7!=0) s++;
	}
	else{
		s+=a/7;
		if(a%7!=0) s++;
	}
	cout<<s;
}
