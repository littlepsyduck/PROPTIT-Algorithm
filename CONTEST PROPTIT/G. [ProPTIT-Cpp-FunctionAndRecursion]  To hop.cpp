#include <bits/stdc++.h>
using namespace std;

long long mod=1e9+7;
long long tohop (int n, int k) {
	long long s=1;
	for(int i=1; i<=k; i++){
		s=s*(n-i+1)/i;
		s%=mod; 
	} 
	return s; 
} 

int main(){
	int t;
	cin >> t; 
	while(t--){
		int n, k;
		cin >> n >> k;
		if(n<k) cout << "-1\n";
		else{
			cout << tohop(n, k) << "\n";
		} 
	} 
} 
