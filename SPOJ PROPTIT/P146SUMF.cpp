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

int a[Nmax], cnt;
void check(ll n){
	while(n>0){
        int x=n%10;
		if(a[x]==0){
			a[x]=1;
			cnt++;
		}
		n/=10;
	}
}

int main()
{
	fast();
	ll n;
	while(cin>>n)
	{
		memset(a, 0, sizeof(a));
		cnt=0;
		int i=0;
		while(cnt<10){
			i++;
            check(n*i);
		}
		cout<<i<<"\n";
	} 
}
