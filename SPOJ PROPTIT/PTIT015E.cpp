#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'
#define pb push_back

using namespace std;

const int Nmax = 1e6+5;

void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}

int isPrime[1000005]; 
//int cnt; 
ll a[Nmax], b[Nmax];
void sieve() {
    // for(int i = 0; i <= 1000005;++i) {
    //     isPrime[i] = true;
    // }
    // isPrime[0] = false;
    // isPrime[1] = false;
    a[0]=0;
    a[1]=b[1]=1;
    for(int i = 2; i  <= 1000005; i++) 
	{
        for(int j = 1; i*j <=1000005; j++){
			a[i*j]++;
			b[i*j]+=i;
		}
		// if(isPrime[i] == true) 
		// {
        //     for(int j = i * i; j <= 1000005; j += i)
        //         isPrime[j] = false;
        // }
    }
	// for (int i=2;i<=1000005;i++)
	// {
	// 	if (isPrime[i]) a[++cnt]=i;
	// }
}
ll cnt[Nmax], s[Nmax];
int main()
{
	fast();
	sieve();
	cnt[1]=s[1]=1;
	for(int i=2; i<=1000000; i++){
		cnt[i]=cnt[i-1]+a[i]+1;
		s[i]=s[i-1]+b[i]+1;
	}
	int t;
	cin>>t;
	while(t--){
		int x, y;
		cin>>x>>y;
		if(x>0){
			cout<<cnt[y]-cnt[x-1]<<" "<<s[y]-s[x-1];
		}
		else{
			cout<<cnt[y]<<" "<<s[y];
		}
		cout<<"\n";
	}
}
