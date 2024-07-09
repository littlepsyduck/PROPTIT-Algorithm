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

int n, a, b;
int a[Nmax][Nmax];
int b[Nmax];
void solve(){
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>a>>b;
		b[i]+=a*b;
	}
	cout<<b[n];
}

int main()
{
	fast
	test{}
}
