#include <bits/stdc++.h>

#define ll long long

#define endl '\n'
#define pb push_back

using namespace std;

const int Nmax = 1e6; 
void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}

const unsigned long long mod = 1e9 + 7;

struct matrix{
    unsigned long long a, b, c, d;
};

matrix multiply(matrix A, matrix B){
    matrix C;
    C.a = (A.a*B.a + A.b*B.c) % mod;
    C.b = (A.a*B.b + A.b*B.d) % mod;
    C.c = (A.c*B.a + A.d*B.c) % mod;
    C.d = (A.c*B.b + A.d*B.d) % mod;
    return C;
}

matrix power(matrix a, long long b){
    matrix res;
    res.a = res.d = 1;
    res.b = res.c = 0;
    while (b > 0){
        if(b % 2)
            res = multiply(res, a);
        a = multiply(a, a);
        b >>= 1;
    }
    return res;
}


void solve(){
	matrix A;
	A.a=1;
	A.b=1;
	A.c=1;
	A.d=0;
	ll n;
	cin >> n;
	cout<<power(A,n).c;
}

int main()
{
	fast();
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<"\n";
	}
} 
