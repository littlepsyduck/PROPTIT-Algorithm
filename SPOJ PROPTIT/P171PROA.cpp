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
	ll l, r, x;
	cin>>l>>r>>x;
	ll s=1;
	int cnt=0;
	while(s<=r){
		if(s>=l){
			cout<<s<<" ";
			cnt++;
		} 
		if(s>r/x) break;
		s*=x;
	}
	if(cnt==0) cout<<-1;
}
