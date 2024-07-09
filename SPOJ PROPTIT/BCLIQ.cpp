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


int a[10005];
int main()
{
	fast();
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int cnt=0;
	int x[n+5]={};
	for(int i=0; i<n; i++){
        x[i]=1;
		for(int j=0; j<i; j++){
			if(a[j]<a[i]&&x[i]<x[j]+1)	x[i]=x[j]+1;
		}
		if(x[i]>cnt)	cnt=x[i];
	}
	cout<<cnt;
}
