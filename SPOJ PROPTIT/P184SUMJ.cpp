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

ll mulmod(ll a, ll b, ll c){
    if(b==0) return 0;
    ll d=mulmod(a, b/2, c);
    if(b%2==0) return ((d+d)%c);
    else return ((d+d)%c+a)%c;
}

ll luythua(ll x, ll y, ll z){
    if(y==0) return 1;
    ll d=luythua(x, y/2, z);
    if(y%2==0) return mulmod(d, d, z);
    else return mulmod(mulmod(d, d, z), x, z);
}



int a[Nmax];
int main()
{
	fast();
	ll n, m, k;
	cin>>n>>m>>k;
	cout<<luythua(n, m, k);
}
