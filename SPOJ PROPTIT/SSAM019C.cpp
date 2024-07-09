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


int a[100];
int b[100];
int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n>>k;
		for(int i=0; i<k; i++){
			cin>>a[i];
			b[i]=a[i];
		}
		int cnt=0;
		int n0=n;
		for(int i=k-1; i>=0; i--){
			if(a[i]<n0){
				cnt++;
				a[i]++;
				for(int j=i+1; j<k; j++){
					a[j]=a[j-1]+1;
				}
				break;
			}
			n0--;
		}
		if(cnt==0) cout<<k;
		else{
			int s=0;
			for(int i=0; i<k; i++){
				for(int j=0; j<k; j++){
					if(a[i]==b[j]){
						s++;
						break;
					}
				}
			}
			cout<<k-s;
		}
		cout<<"\n";
	} 
}
