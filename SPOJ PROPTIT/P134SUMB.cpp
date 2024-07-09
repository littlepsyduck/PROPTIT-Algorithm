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



int main()
{
	fast();
	ll g, y;
	cin>>g>>y;
	y+=g;
    g/=2;
    g+=2;
    ll d=g*g-4*1*y;
    ll x1=(g-sqrt(d))/2;
    ll x2=(g+sqrt(d))/2;
    if(x1>x2) swap(x1, x2);
    cout<<x1<<" "<<x2;
}
