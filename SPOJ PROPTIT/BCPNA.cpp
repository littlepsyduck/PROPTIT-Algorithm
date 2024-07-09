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
		int cnt=0;
		for(int i=1; i<=n; i++){
			int j=i, s=0;
            while(s<n){
                s+=a[j];
                j++;
            }
			if(s==n) cnt++;
		}
		cout<<cnt<<"\n";
	} 
}
