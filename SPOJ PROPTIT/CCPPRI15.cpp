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

int isPrime[1000000]; 
void sieve() {
    for(int i = 0; i <= 1000000; ++i) {
        isPrime[i] = i;
    }
    for(int i = 2; i * i <=1000000; ++i) {
         if(isPrime[i]) {
             for(int j = i * i; j <=1000000; j += i){
                if(isPrime[j]==j)
				{
					isPrime[j]=i; 
				}
			}
        }
    }
}

int main()
{
	fast();
	sieve();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=1; i<=n; i++){
			cout<<isPrime[i]<<" ";
		}
		cout<<"\n";
	} 
}
