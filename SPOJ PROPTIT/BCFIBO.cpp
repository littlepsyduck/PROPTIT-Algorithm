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


int n, a;
int main()
{
	fast();
	cin >> a;
		int f, f0 = 0, f1 = 1;
		for(int i=1; i<=a; i++)
		{
			if(i<=1){
				f=i; 
			}else{
				f=f0%mod+f1%mod;
		    	f0=f1%mod;
		    	f1=f%mod;
			} 
			
		}
		cout << f%mod << "\n"; 
}
