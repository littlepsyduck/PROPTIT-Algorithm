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


int a[Nmax];
int main()
{
	fast();
	int t;
	while(cin>>t)
	{
		if(t==0) return 0;
		else{
			for(int i=1; i<=t; i++){
				cin>>a[i];
			}
			int i=1;
			int x=1;
            int d=1;
			while(i<=t){
				
				while(d<=a[i]){
					cout<<x<<" ";
                    d++;
                    
				}
				x++;
				i++;
			}
			cout<<"\n";
		}
	} 
}