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

// int isPrime[1000005]; 
// void sieve() {
//     for(int i = 0; i <= 1000005;++i) {
//         isPrime[i] = true;
//     }
//     isPrime[0] = false;
//     isPrime[1] = false;
//     for(int i = 2; i * i <= 1000005; ++i) 
// 	{
//          if(isPrime[i] == true) 
// 		 {
//             for(int j = i * i; j <= 1000005; j += i)
//                 isPrime[j] = false;
//         }
//     }
// }

int divisors(ll N)
{
    if (sqrt(N) == (float)sqrt(N))  return 0;
    for (ll i = 2; i <= sqrt(N); i++){
		if (N % i == 0)
			if (sqrt(i) == (float)sqrt(i) || sqrt(N / i) == (float)sqrt(N / i))
				return 0;
    }
	return 1;
}

int main()
{
	fast();
    // sieve();
	ll n;
	cin>>n;
	ll maxx=0;
	if(n==1)   cout<<1; 
    // else if(isPrime[n]) cout<<n;
    else{
		for(ll i=1; i<=sqrt(n); i++){
			if(n%i==0){
				if(divisors(i)==1 && i >maxx){
					maxx= i;
				}
				if(divisors(n/i)==1 && n/i >maxx){
					maxx= n/i;
				}
			}
		}
		cout<< maxx;
    }
}
