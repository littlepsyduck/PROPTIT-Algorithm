#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}
int isPrime[1000000]={}; 
int a[1000000];
ll b[1000000];
void sieve() {
	isPrime[1]=0; 
    for(int i = 2; i<=1000000; ++i) 
	{
        isPrime[i]=1; 
    }
    for(int i=2; i<=1000000; i++)
	{
   		for(int j=i*2; j<=1000000; j+=i)
		{
			isPrime[j]+=i; 
		} 
	}  
	for(int i=1; i<=1000000; i++)
	{
		
		a[i]=abs(isPrime[i]-i); 
	}
	for(int i=1; i<=1000000; i++)
	{
		b[i]=b[i-1] + a[i]; 
	} 
}
 
void solve()
{
	ll s=0;
	int l, r;
	cin>>l>>r;
	cout<<b[r]-b[l-1]<<"\n"; 
} 

int main()
{
	fast();
	sieve();
	int t;
	cin>>t;
	while(t--)
	{
		solve(); 
	} 
}

