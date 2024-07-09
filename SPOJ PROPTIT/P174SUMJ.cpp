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
int b[Nmax];
int main()
{
	fast();
	int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>a[i];
		b[a[i]]++;
	}
	sort(a+1, a+n+1);
	int cnt=0;
	int f=b[a[1]];
	for(int i=2; i<=n; i++){
		if(a[i]>a[i-1]){
			cnt+=min(f, b[a[i]]);
			f=max(f, b[a[i]]);
		}
	}
	cout<<cnt;
}
