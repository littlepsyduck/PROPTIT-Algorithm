#include <bits/stdc++.h>
using namespace std;

int checksnt (long long n) {
    if (n < 2) return 0;
    for (long long i = 2; i <= sqrt (n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int tongchuso (long long n) {
	int dem=0;
	do{
        int a=n%10;
        n/=10;
        dem+=a;
    }while(n>0);
    
    return dem; 
} 


long long dequy (long long n) {

	long long sum=0; 
	if(checksnt(n)==1) return sum=sum+tongchuso(n); 
	else{
		for (int i=2; i<=sqrt(n); i++){
			if (n % i == 0){
        		if(checksnt(i)==1)	sum=sum+tongchuso(i);
				else{
					sum=sum+dequy(i);
				} 
            	int j = n / i;
            	if (j != i)  
					if(checksnt(j)==1) sum=sum+tongchuso(j); 
					else{
						sum=sum+dequy(j); 
				} 
        	}
		}
		return sum; 
	} 
}

int main(){
	long long n;
	cin >> n;
	cout << dequy(n); 
} 
