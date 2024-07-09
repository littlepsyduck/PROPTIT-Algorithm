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
	string s;
	while(cin>>s){
		if(s=="0") return 0;
		else{
			int x=0;
			for(int i=0; i<=4; i++){
				for(int j=0; j<=s.size()-i; j++){
					int x2=0;
					for(int k=0; k<=i; k++){
						x2=x2*10+s[j+k]-'0';
					}
					if(isPrime[x2]) x=max(x, x2);
				}
			}
			cout<<x;
			cout<<"\n";
		}
	}
}
