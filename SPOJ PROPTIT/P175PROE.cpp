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

int sonen (ll n) {
	ll s=0; 
	while(n>0){
		ll a=n%10;
		s+=a;
		n/=10; 
	} 
	return s; 
}

int main()
{
	fast();
	string s;
    cin>>s;
    int l=s.size();
    if(l==1){
        cout<<0;
        return 0;
    }
    int cnt=1;
    int n=0;
    for(int i=0; i<l; i++){
        n+=(s[i]-'0');
    }
    while(n>9){
        n=sonen(n);
        cnt++;
    }
    cout<<cnt;
}
