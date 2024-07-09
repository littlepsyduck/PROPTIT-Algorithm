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
	int n;
	while(cin>>n)
	{
		if(n==0) return 0;
		else{
			int b[50]={};
            int s[n][6];
			for(int j=0; j<n; j++){
				for(int i=0; i<6;i++){
					cin>>s[j][i];
                    b[s[j][i]]++;
				}
			}
			int x=0;
			for(int i=1; i<=49; i++){
				if(b[i]==0){ 
					x=1;
					break;
				}
			}
			if(x==0) cout<<"Yes";
            else cout<<"No";
			cout<<"\n";
		}
	}
}
