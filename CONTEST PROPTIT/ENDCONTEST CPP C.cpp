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

int b[Nmax];
int x[Nmax];
int main()
{
	fast();
	int n, k;
	cin>>n>>k;
    int cnt=0;
	for(int i=1; i<=n; i++)
	{
		int a;
		cin>>a;
		for(int i=a; i<=k; i+=a)
		{
			x[i]=1;
			b[x[i]]++;
		}
	}
	for(int i=1; i<=k; i++)
	{
		if(b[x[i]]==0){
			cnt++;
		}
	}
	cout<<cnt<<"\n";
}
