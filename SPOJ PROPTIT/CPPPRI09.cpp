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

void factorize(long long n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            long long mu = 0;
            while(n % i == 0)
            {
                mu++;
                n /= i;
            }
                cout << i << " "<<mu<<" ";
        }
    }
    if(n > 1)
    {
        cout << n << " 1";
    }
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
		factorize(n);
        cout<<"\n";
	} 
}
