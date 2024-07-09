#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'

using namespace std;

const int Nmax = 1e6;

void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}


int a[15],b[42];
int main()
{
	fast();
	int s=0;
	for(int i=1;i<=10;i++){
		cin>>a[i];
	} 
	for(int i=1;i<=10;i++){
		b[a[i]%42]++;
	}
	for(int i=0;i<42;i++){
		if(b[i]>0)	s++;
	}
	cout<<s;
}
