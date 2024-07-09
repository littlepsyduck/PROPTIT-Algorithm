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

double w[205], c[205];
int a[205];
void solve(){
	memset(a, 0, sizeof(a));
	int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>w[i]>>c[i];
	}
	for(int i=1; i<n; i++){
		for(int j=i+1; j<=n; j++){
			if(w[i]<w[j]&&c[i]>c[j]){
                a[j]=max(a[i]+1, a[j]);
            } 
		}
	}
	int cnt=0;
	for(int i=1; i<=n; i++){
		cnt=max(cnt, a[i]);
	}
	cout<<cnt+1;
	cout<<"\n";
}

int main()
{
	fast();
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
