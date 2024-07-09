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
string s[Nmax];
int main()
{
	fast();
	int n, k;
	cin>>n>>k;
	for(int i=1; i<=n; i++){
		cin>>s[i];
	}
	sort(s+1, s+n+1);
	int x=1;
	while(a[x-1]+x<k){
		a[x]=a[x-1]+x;
		x++;
	}
	k-=a[x-1];
	cout<<s[k];
}
