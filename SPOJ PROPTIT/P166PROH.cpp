#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'
#define pb push_back

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
	int n;
	cin>>n;
	int cnt=0;
	for(int i=1; i<=n; i++){
		int cnt2=0;
		for(int j=1; j<=i; j++){
			if(i%j==0){
                if(isPrime[j]) cnt2++;
			}	
		}
        if(cnt2==2) cnt++;
	}
	cout<<cnt;
}
