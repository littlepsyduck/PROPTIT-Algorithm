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


ll a[Nmax];
int main()
{
	fast();
	int n, k;
	cin>>n>>k;
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	sort(a+1, a+n+1);
	int x=1;
	while(a[x]<0&&k>0){
		a[x]=-a[x];
		x++;
		k--;
	}
	ll s=0;
	if(k==0){
		for(int i=1; i<=n; i++){
			s+=a[i];
		}
		cout<<s;
		return 0;
	}
	else{
		sort(a+1, a+n+1);
		if(k%2==1){
			a[1]=-a[1];
		}
		for(int i=1; i<=n; i++){
			s+=a[i];
		}
		cout<<s;
	}

}
