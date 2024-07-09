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
		int n, a, b;
		cin>>n>>a>>b;
		if(a>b){
			int t=a;
			a=b;
			b=t;
		}
		int cnt=0;
        
            for(int j=a+1; j<=n; j++){
			    cnt++; 
		    }
        
        cout<<cnt<<"\n";
	
}
