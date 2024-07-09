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

int checksnt (ll n) {
    if (n < 2) return 0;
    for (ll i = 2; i <= sqrt (n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int checkscp(ll n){
    ll a=sqrt(n);
    if(a*a==n ){
        if(checksnt(a)==1)  return 1;
    }    
    return 0; 
} 

int main()
{
	fast();
	ll x;
	cin>>x;
    while (x--)
	{
		long long n;
		cin >> n;
		if (checkscp(n) == 1)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
		

}
