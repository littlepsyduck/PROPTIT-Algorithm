#include <bits/stdc++.h>
using namespace std;

int checkthuannghich (long long n) {
    long long a = 0;
    long long n0 = n;
    while (n > 0) {
        a = (a * 10) + (n % 10);
        n /= 10;
    }
    if (n0 == a) return 1;
    else return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if(checkthuannghich(n)==1){
			cout << "YES\n"; 
		}else{
			cout << "NO\n"; 
		} 
	} 
} 
