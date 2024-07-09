#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'
#define pb push_back
#define for(i, a, b) for(int i = a; i <= b; i+i+)
#define ford(i, a, b) for(int i = a; i >= b; i--)
#define f(i, a, b) for(int i = a; i < b; i++)
#define fd(i, a, b) for(int i = a; i > b; i--)

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
	ll n, m , a;
	cin>>n>>m>>a;
	ll x=(n/a)*(m/a);
	if(n%a!=0&&m%a!=0){
        x+=n/a+m/a+1;
    }
    else if(n%a!=0){
        x+=m/a;
    }
    else if(m%a!=0){
        x+=n/a;
    }
    cout<<x;
	
}
