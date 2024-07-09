#include <bits/stdc++.h>
using namespace std;

int n, a;
long long mod=1e9+7;
int main()
{
	cin >> n;
	while(n--)
	{
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
}
