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
		int a, m;
		cin>>a>>m;
        int cnt=0;
		for(int i=0; i<m; i++)
		{
			int x=a*i;
			if(x%m==1){
				cout<<i;
                cnt=1;
				break;
			}
		}
        if(cnt==0) cout<<-1;
		cout<<"\n";
	} 
}
