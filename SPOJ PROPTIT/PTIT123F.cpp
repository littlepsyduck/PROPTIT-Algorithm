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
		int n;
		cin>>n;
		int A[105];
		int s=0;
		for (int i = 1; i <= n; i++) {
			A[i]=1;
		}
		for (int i = 2; i <= n; i++) {
			for(int j = i; j <= n; j++) {
				if(j%i==0){
					if(A[j]==1) A[j]=0;
					else A[j]=1;
				}
			}	
		}
		for(int i=1; i<=n; i++){
			if(A[i]==1) s++;
		}
		cout<<s<<"\n";
    }
}
