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



int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		int t0;
        ll n;
        cin>>t0>>n;
        int cnt=0;
        if(n%2!=0) cnt++;
        for (int i=2; i<=sqrt(n); i++)
            if (n % i == 0)
            {
                
                if((n-i*(i-1)/2)%i==0)
                {
                    
                    cnt++; 
                }
                ll j = n / i;
                if(j != i)
                {
                    if ((n-j*(j-1)/2)%j==0)
                    {
                        
                        cnt++;   
                    }
                }
                
            }
        cout<<t0<<" "<<cnt;
        cout<<"\n";
	} 
}