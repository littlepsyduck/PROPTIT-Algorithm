#include <bits/stdc++.h>
#define mod 1000000007 
using namespace std;

int main(){
    long long a, b;
    cin>> a >> b;
    long long x=1; 
   	if(b==0) cout << x; 
   	for(int i=1; i<=b; i++){
   		a%=mod;
		x*=a;
		x%=mod; 
	} 
    cout << x; 
}
