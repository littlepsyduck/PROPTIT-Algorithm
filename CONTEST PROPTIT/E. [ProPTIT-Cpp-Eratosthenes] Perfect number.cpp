#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}
//uoc so 
int isPrime[1000000]={}; 
int a[1000000];
void sieve() {
	isPrime[1]=1; 
    for(int i = 2; i<=1000000; ++i) 
	{
        isPrime[i]=2; 
    }
    for(int i=2; i<=1000000; i++)
	{
   		for(int j=i*2; j<=1000000; j+=i)
		{
			isPrime[j]++; 
		} 
	}  
	for(int i=1; i<=1000000; i++)
	{
		//int souoc=isPrime[i];
		//isPrime[isPrime[i]]==2 snt 
		if(isPrime[isPrime[i]]==2){
			a[i]=1; 
		} 
	}
	for(int i=1; i<=1000000; i++)
	{
		a[i]=a[i]+a[i-1]; 
	} 
}

void solve()
{
	int l, r;
	cin>>l>>r;
	cout<<a[r]-a[l-1]<<"\n"; 
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

