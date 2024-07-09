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
	
	while(cin>>t)
	{
		if(t==0) return 0;
		else{
			int cnt=1;
			while(t!=1){
				if(t%2==0) t=t/2;
				else t=(t*3)+1;
				cnt++;
			}
            cout<<cnt<<"\n";
		}
		
	} 
}
