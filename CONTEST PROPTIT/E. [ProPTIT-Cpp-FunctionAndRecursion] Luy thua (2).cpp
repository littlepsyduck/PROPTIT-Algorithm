#include<bits/stdc++.h>
using namespace std;
long long pow(long long a, int b)
{
	long long mod=1e9+7;
	if(b==0) return 1ll;
	long long c=pow(a, b/2);
	long long d=c%mod; 
	if(b%2==1) return ((d*d)%mod*(a%mod))%mod;
	else return (d*d)%mod;
}
int main()
{
	long long a;
	int b; 
	cin>>a>>b;
	cout<<pow(a, b);
	return 0;
}
