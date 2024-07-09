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

int main()
{
	fast();
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
    	int cnt = 0;
    	for (int i=1; i<=sqrt(n); i++){
        	if (n % i == 0)
        	{
            	if(i%2==0) ++cnt;
            	int j = n / i;
            	if (j != i&&j%2==0)  
				++cnt;
        	}
		}
		cout<<cnt;
		cout<<"\n";
	}
}
