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

int check(int n){
	int n0=0, cnt=1;
	while(n>0){
		if(n%10!=0){
			n0=n0+(n%10)*cnt;
			cnt*=10;
		}
		n/=10;
	}
	return n0;
}

int main()
{
	fast();
	int a, b;
	cin>>a>>b;
	int c=a+b;
	a=check(a);
	b=check(b);
	c=check(c);
	if(a+b==c) cout<<"YES";
	else cout<<"NO";
}
