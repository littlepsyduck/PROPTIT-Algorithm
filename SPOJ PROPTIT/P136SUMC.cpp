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

int checkthuannghich (ll n) {
    ll a = 0;
    while (n > 0) {
        a = (a * 10) + (n % 10);
        n /= 10;
    }
    return a;
}

int main()
{
	fast();
	int a, b;
	cin>>a>>b;
	if(checkthuannghich(a)>checkthuannghich(b)) cout<<checkthuannghich(a);
	else cout<<checkthuannghich(b); 
}
