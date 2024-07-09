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
void solve(){
	int n, l;
	cin>>n>>l;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	sort(a, a+n);
	double kc=max(a[0], l-a[n-1]);
	for(int i=1; i<n; i++){
		kc=max(kc, (a[i]-a[i-1])/2.0);
	}
	cout<<fixed<<setprecision(10)<<kc;
}


int main()
{
	fast();
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<"\n";
	}
	
}
