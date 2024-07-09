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
ll n, a, b, s;
void solve(){
	cin>>n>>a>>b;
	if(2*a>b){
		s=n/2*b+n%2*a;
	}
	else{
		s=n*a;
	}
    cout<<s;
}

int main()
{
	fast
	test{
		solve();
		cout<<"\n";
	}
}
