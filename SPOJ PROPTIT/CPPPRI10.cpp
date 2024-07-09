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

int tong(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool smith(int n){
    int tong1 = tong(n); 
    int tong2 = 0;
    int tmp = n;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            while(n % i == 0){
                tong2 += tong(i);
                n /= i;
            }
        }
    }
    if(tmp == n) return false; 
    if(n > 1)
        tong2 += tong(n);
    return tong1 == tong2;
}

int main()
{
	fast();
    sieve();
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
        if(isPrime[n]) cout<<"NO\n";
        else{
            if(smith(n)) cout<<"YES\n";
            else cout<<"NO\n";
        } 
	}
}
