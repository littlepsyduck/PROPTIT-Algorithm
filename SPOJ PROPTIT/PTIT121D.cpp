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


ll f[Nmax];
int main()
{
	fast();
	string s=" moo";
	f[0]=3;
	int k=0;
	while(f[k]<1000000000){
		k++;
		f[k]=f[k-1]+k+2+f[k-1]+1;
	}
	int n;
	cin>>n;
	k=0;
	while(f[k]<n)
	{
		k++;
	} 
	while(1)
	{
		if(k==0){
            cout<<s[n];
            return 0;
        } 
		else if(f[k-1]+k+2+1>=n){
			if(n==f[k-1]+1){
                cout<<"m";
                return 0;
            } 
			else{
                cout<<"o";
                return 0;
            }  
		}
		n-=f[k-1]+k+2+1;
		k=0;
		while(f[k]<n)
		{
			k++;
		}
	}
}
