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


int a[100005];
int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		for(int i=0; i<n-1; i++){
			if(a[i+1]!=0&&a[i]==a[i+1]){
				a[i]*=2;
				a[i+1]=0;
			}
		}
		int cnt=0;
		for(int i=0; i<n; i++){
			if(a[i]!=0 ) cout<<a[i]<<" ";
			else 
				cnt++;
		}
		for(int i=0; i<cnt; i++){
			cout<<0<<" ";
		}
		cout<<"\n";
	} 
}
