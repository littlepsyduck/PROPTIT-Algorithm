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


ll a[5];
int main()
{
	fast();
	cin>>a[1]>>a[2]>>a[3]>>a[4];
	sort(a+1, a+4+1);
	cout<<a[1]*a[3];
}