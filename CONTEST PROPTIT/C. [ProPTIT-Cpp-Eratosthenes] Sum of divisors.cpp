#include <bits/stdc++.h>
using namespace std;

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

long long tong (int n) {
	long long s=0; 
	while(n!=1)
	{
		int tmp=isPrime[n];
		while(n%tmp==0)
		{
			s+=tmp;
			n/=tmp;	
		} 
	}
	return s; 
} 

int main(){
	fast();
	sieve(); 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long sum=0;		
		while(n--){
			int x;
			cin>>x;
			sum+=tong(x); 
		}
		cout<<sum<<"\n"; 
	} 
}
