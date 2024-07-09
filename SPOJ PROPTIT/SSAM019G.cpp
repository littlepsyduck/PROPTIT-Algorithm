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

ll fibo[95];
char dequy(int n, ll m){
	if(n==1) return 'A';
	else if(n==2) return 'B';
	else{
		if(m<=fibo[n-2]) return dequy(n-2, m);
		else return dequy(n-1, m-fibo[n-2]);
	}
}

int main()
{
	fast();
    fibo[1]=1;
    fibo[2]=1;
    for(int i=3; i<=92; i++){
        fibo[i]=fibo[i-2]+fibo[i-1];
    }
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		ll m;
		cin>>n>>m;
		cout<<dequy(n, m);
		cout<<"\n";
	} 
}
