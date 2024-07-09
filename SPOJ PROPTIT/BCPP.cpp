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

bool check(int n)
{   
    ll s=0;
	ll a = sqrt(n);
    for(ll i=1; i<=sqrt(n); i++){
        if(n%i==0){
            s+=i;
			if(i!=1)	s+=n/i;
        }  
    }
    if(a*a==n){
        s-=a;
    }  
	if(s>n) return true;
	else return false;   
}
int cnt;
int main()
{
	fast();
	int l, r;
	cin>>l>>r;
	for(int i=l; i<=r; i++){
		if(check(i)) cnt++;
	}
	cout<<cnt;
}
