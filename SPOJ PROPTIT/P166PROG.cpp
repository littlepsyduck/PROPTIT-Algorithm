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


string a;
string a0;
int main()
{
	fast();
	int n;
	cin>>n;
	cin>>a>>a0;
	int cnt=0;
	for(int i=0; i<a.size(); i++){
		cnt+=min(abs(a[i]-a0[i]), min(10+a[i]-a0[i], 10-a[i]+a0[i]));
	}
	cout<<cnt;
}
