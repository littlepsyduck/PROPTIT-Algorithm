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
	for(int i=1; i<=10005; i++){
		a[i]=a[i-1]+i;
	}
	int n;
	cin>>n;
	int cnt=0;
	for(int i=1; i<=10005; i++){
		n-=a[i];
		if(n>0) cnt++;
		else break;
	}
	cout<<cnt;
}
