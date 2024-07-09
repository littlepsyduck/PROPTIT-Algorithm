#include <bits/stdc++.h>
 
#define ll long long
#define mod 1000000007
#define endl '\n'
 
using namespace std;
 
const int Nmax = 1e6;
 
void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}
 
ll luythua (ll x, ll y,ll p)
{
	if(y==1) return x;
	else if(y%2==0) 
        return (luythua(x, y/2, p)*luythua(x, y/2, p))%p;
    else 
        return (luythua(x, y-1, p)*x)%p;
} 
 
int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		ll x, y, p;
		cin>>x>>y>>p;
        cout<<luythua(x, y, p);
		cout<<"\n";
	} 
}
 