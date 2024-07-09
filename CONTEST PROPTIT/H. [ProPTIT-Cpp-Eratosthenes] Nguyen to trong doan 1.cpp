#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

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

int main() {
	fast();
	sieve();
	int t;
	cin>>t;
	while(t--)
	{
		int l,r;
		cin>>l>>r;
		for(int i=l; i<=r; i++){
			if(isPrime[i]) cout<<i<<" ";
		}
		cout<<"\n"; 
	} 
	return 0;
}
