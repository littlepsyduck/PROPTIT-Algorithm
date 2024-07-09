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

int x[1005];
void fibonacci() {
    x[0]=1;
    x[1]=1;
    int f0=1,f1=1;
	while(f0<=1000){
		int fn=f0+f1;
		f1=f0;
		f0=fn;
		x[f0]=1;
	}
}

int main()
{
	fast();
	fibonacci();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
        for(int i=0; i<n; i++){
			if(x[a[i]]==1)
            cout<<a[i]<<" ";
		}
		cout<<"\n";
	} 
}
