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

int isPrime[1000005]; 
void sieve() {
    for(int i = 0; i <= 1000005;++i) {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= 1000005; ++i) 
	{
         if(isPrime[i] == true) 
		 {
            for(int j = i * i; j <= 1000005; j += i)
                isPrime[j] = false;
        }
    }
} 

int main()
{
	fast();
    sieve();
	ll x;
	cin>>x;
    while (x--)
	{
		ll n;
		cin >> n;
        int cnt=0;
        for(int i=1; i<=sqrt(n); i++){
            if (isPrime[i] && i*i<=n)
			    cnt++;
        }
        cout<<cnt<<"\n";
		
	}
		

}
