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

pair<int, int> a[Nmax];
int main()
{
	fast();
	int n;
	cin>>n;
	int minn=1000000009, maxx=0;
	for(int i=1; i<=n; i++){
		cin>>a[i].first>>a[i].second;
		minn=min(minn, a[i].first);
		maxx=max(maxx, a[i].second);
	}
	int cnt=0, d=-1;
	for(int i=1; i<=n; i++){
		if(a[i].first<=minn&&a[i].second>=maxx&&a[i].second-a[i].first>d){
			cnt=i;
			d=a[i].second-a[i].first;
		}
	}
	if(cnt==0) cout<<-1;
	else cout<<cnt;
}
