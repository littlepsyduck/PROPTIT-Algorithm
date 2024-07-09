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

ll solve(int n){
    ll s=0;
    if(n==0) return 1;
    else 
        return s=(n)*(solve(n-1));
}


int main()
{
	fast();
	int n;
	cin>>n;
	cout<<n*(n-1)*(n-2)*(n-3)/24;
	
}
