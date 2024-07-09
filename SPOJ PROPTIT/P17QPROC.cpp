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


ll f[10000007], ff[10000007];
int main()
{
	fast();
	for(int i=2; i<=10000000; i++){
		for(int j=2; j*i<=10000000; j++){
			f[i*j]+=i;
		}
	}
	ff[1]=1;
	for(int i=2; i<=10000000; i++){
		f[i]++;
		ff[i]=ff[i-1]+abs(i-f[i]);
	}
	int a, b;
	cin>>a>>b;
	cout<<ff[b]-ff[a-1];
	cout<<"\n";
}
