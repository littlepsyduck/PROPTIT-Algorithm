#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'
#define pb push_back
#define pop pop_back
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test int t; cin >> t; while(t--)

using namespace std;

const int Nmax = 1e6;

int n;
int a[Nmax];
int b[Nmax];
void solve(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b, b+n);
	map<int, int> mp;

	for(int i=0; i<n; i++){
		mp[b[i]]=i;
	}
	for(int i=0; i<n; i++){
		cout<<mp[a[i]]<<" ";
	}
}

int main()
{
	fast
	//test{}
	solve();
}