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

int tongchuso(ll n){
	int c=0; 
	do{
        int a=n%10;
        n/=10;
        c++;
    }while(n>0);
    
    return c;
} 

int main()
{
	fast();
	ll n;
    cin>>n;
    if(tongchuso(n)==4||tongchuso(n)==7) cout<<"YES";
    else cout<<"NO";
}
