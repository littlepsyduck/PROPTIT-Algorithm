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



int main()
{
	fast();
	int c, v0, v1, a, l;
	cin>>c>>v0>>v1>>a>>l;
	int v=v0, cnt=1;
	v0=min(v0+a, v1);
	while(v<c){
		v+=v0-l;
        v0=min(v0+a, v1);
		cnt++;
	}
	cout<<cnt;
}
