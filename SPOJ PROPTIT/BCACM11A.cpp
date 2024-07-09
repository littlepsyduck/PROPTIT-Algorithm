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

bool checkthuannghich (int n) {
    int a = 0;
    int n0 = n;
    while (n > 0) {
        a = (a * 10) + (n % 10);
        n /= 10;
    }
    return a==n0;
}

bool tongchuso(int n){
	int c; 
	do{
        int a=n%10;
        n/=10;
        c+=a;
    }while(n>0);
    
    return c%10==0;
} 

bool check(int n){
	int a; 
	do{
        a=n%10;
        if(a==0){
			return false;
		} 
        n/=10;
    }while(n>0);
    return true;
} 

int main()
{
	fast();
    // int a=0, b=0, c=0;
    // for(int i=100000; i<=999999; i++){
	// 	if(checkthuannghich(i)){
	// 		a++;
	// 		if(tongchuso(i)){
	// 			b++;
	// 			if(check(i)){
	// 				c++;
	// 			}
	// 		}
	// 	}
	// }
	int n; 
	cin>>n;
	while(n--){
		int n, m, k;
		cin>>n>>m>>k;
		int cnt=1;
        int a=900, b=180, c=145;
	    if(n>c) cnt=0;
	    else{
            a-=n; 
            b-=n;
		    if(m>b) cnt=0;
		    else{
                a-=m;
			    if(k>a) cnt=0;
		    }
	    }
        if(cnt==1)  cout<<"YES";
		else cout<<"NO";
		cout<<"\n";
	}
}
