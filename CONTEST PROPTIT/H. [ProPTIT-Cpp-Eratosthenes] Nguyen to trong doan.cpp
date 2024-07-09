#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}

int max(int a, int b){
	if(a>b) 
		return a;
	return b; 
} 

void sieve (int l, int r){
	int Prime[r-l+1];
	for(int i=0; i<=r-l; i++){
		Prime[i]=1; 
	} 
	for(int i=2; i<=sqrt(r); i++){
		for(int j=max(i*i, (l+i-1)/i*i); j<=r; j+=i){
			Prime[j-l]=0; 
		} 
	}
	for(int i=max(l, 2); i<=r; i++){
		if(Prime[i-l])
		cout<<i<<" "; 
	} 
} 

int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		int a, b;
		cin>>a>>b;
		sieve(a, b);
		cout<<"\n"; 
	} 
}
