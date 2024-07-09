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
vector<int> v;
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
		if (isPrime[i]) v.pb(i);
	}
}

int main()
{
	fast();
	sieve();
	int n;
	cin>>n;
	ll s=0;
	while(n--){
		int m;
		cin>>m;
		int i=0;
		while(i<v.size()&&m>1&&v[i]<=sqrt(m)){
			while(m%v[i]==0){
				m/=v[i];
				s+=v[i];
			}
			i++;
		}
		if(m>1) s+=m;
	}
	cout<<s;
}
