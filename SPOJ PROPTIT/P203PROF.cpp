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
	int n;
	cin>>n;
	ll s=0;
	for(int i=1; i<=n; i++){
		cin>>a[i];
		s+=a[i];
	}
	if(s%2!=0){
		cout<<s;
	}
	else{
		sort(a+1, a+n+1);
		for(int i=1; i<=n; i++){
			if(a[i]%2!=0){
				s-=a[i];
				break;
			}
		}
		cout<<s;
	}
}
