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

struct bo{
	ll p;
	ll s;
	ll ps=p+s;

	bool operator < (const bo other){
		return ps < other.ps;
	}
};

int main()
{
	fast();
	ll n, b;
	cin>>n>>b;
	ll max=0;
	struct bo a[n];
	for(int i=0; i<n; i++){
		cin>>a[i].p>>a[i].s;
		a[i].ps=a[i].p+a[i].s;
	}
	sort(a,a+n);
	max=a[0].ps;
	if(max>b){
		cout<<"0";
		return 0;
	}
	int cnt=0;
	max-=a[0].p/2;
	for(int i=1; i<n; i++){
		if(max>b){
			break;
		}
		else{
			max+=a[i-1].p/2+a[i].ps-a[i].p/2;
			cnt++;
		}
	}
	cout<<cnt;
}
