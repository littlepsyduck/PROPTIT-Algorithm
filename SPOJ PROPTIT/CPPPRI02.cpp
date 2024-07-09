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

ll factorize(ll n)
{
    ll res;
    for(int i = 2; i <= sqrt(n); i++)
    {
        while(n % i == 0)
        {
            res=i;
            n /= i;
        }
    }
    if(n!=1)
    {
        res=n;
    }
    return res;
}

int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
        cout<<factorize(n)<<"\n";
	} 
}
