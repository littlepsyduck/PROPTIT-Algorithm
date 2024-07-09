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


int a[105], b[105], f[105];
int main()
{
	fast();
	int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>a[i]>>b[i];
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(i!=j){
				if(b[i]==a[j]) f[j]++;
			}
		}
	}
	int cnt=0;
	for(int i=1; i<=n; i++){
		if(f[i]==0) cnt++;
	}
	cout<<cnt;
}
