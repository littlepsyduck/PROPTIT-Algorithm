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


int a[Nmax];
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
		int cnt=0;
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n-1; j++){
				if(a[i]==a[j]){
					cout<<a[i];
					cnt++;
					break;
				}
			}
			if(cnt!=0) break;
		}
		if(cnt==0) cout<<"NO";
		cout<<"\n";
	} 
}
