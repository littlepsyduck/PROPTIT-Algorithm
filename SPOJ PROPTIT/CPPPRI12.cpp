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

int thuaso(int n, int k){
    int cnt=0;
    for(int i=2; i<=sqrt(n); i++)
    {
        while(n%i==0){
            ++cnt;
            if(cnt==k) return i;
            n/=i; 
        }    
    } 
    if(n!=1) ++cnt;
    if(cnt==k) return n;
    else return -1; 
}

int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
    	cin>>n>>k;
    	cout<<thuaso(n, k); 
		cout<<"\n";
	} 
}
