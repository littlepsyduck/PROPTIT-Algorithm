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
	int n;
	cin>>n;
	int cnt=0;
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	for(int i=1; i<=n; i++){
		if(a[i]==0) cnt++;
		if(cnt>1){
			cout<<"NO";
			return 0;
		}
	}
	if(cnt==1) cout<<"YES";
	else cout<<"NO";
}
