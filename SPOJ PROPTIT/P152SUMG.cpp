#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}

int isPrime[1000005]; 
int cnt; 
int a[200000];
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
	for (int i=2;i<=1000005;i++)
	{
		if (isPrime[i]) a[++cnt]=i;
	}
}

int f[1000005];
int main()
{
	fast();
	sieve();
	int d=1; 
	for(int i=0; i<=1000000; i++)
	{
		if(a[d]<=i) d++;
     	f[i]=a[d];
	}	
	int n, m;
	cin>>n>>m;
	if(f[n]==m)
	    cout<<"YES";
	else
	cout<<"NO"; 
	 
}