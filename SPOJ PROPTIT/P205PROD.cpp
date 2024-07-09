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
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=1; i<=n; i++){
			cin>>a[i];
		}
		sort(a+1, a+n+1);
		int cnt=0;
		for(int i=2; i<=n; i++){
			if(a[i]!=a[i-1]){
				cnt++;
				break;
			}
		}
		if(cnt==0) cout<<n;
		else cout<<1;
		cout<<"\n";
	}
}
