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

int n, k, a[Nmax];

void sinh(){
	int i=k;
	while(i>=1&&a[i]==n-k+i){
		i--;
	}
	if(i==0){
		for(int i=1; i<=k; i++){
			cout<<i<<" ";
		}
	} 
	else{
		a[i]++;
		for(int j=i+1; j<=k; j++){
			a[j]=a[j-1]+1;
		}
		for(int i=1; i<=k; i++){
			cout<<a[i]<<" ";
		}
	}
}

int main()
{
	fast();
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1; i<=k; i++){
			cin>>a[i];
		}
		sinh();
		cout<<"\n";
	}
}	
