#include <bits/stdc++.h>
using namespace std;

int sonen (int n) {
	int s=0; 
	while(n>0){
		int a=n%10;
		s+=a;
		n/=10; 
	} 
	return s; 
} 

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n; 
		while(n>=10) n=sonen(n);
		cout << n << "\n"; 
	} 
} 
