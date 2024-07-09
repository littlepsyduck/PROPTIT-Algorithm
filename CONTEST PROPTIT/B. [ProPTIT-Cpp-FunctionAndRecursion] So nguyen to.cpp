#include <bits/stdc++.h>
using namespace std;

int checksnt (long long n) {
    if (n < 2) return 0;
    for (long long i = 2; i <= sqrt (n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(){
	int n;
	cin >> n;
	if(checksnt(n)==1){
		cout << "YES"; 
	}else{
		cout << "NO"; 
	} 
} 
