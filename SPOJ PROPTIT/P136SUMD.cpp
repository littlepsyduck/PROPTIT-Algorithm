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


int main()
{
	fast();
	int c, k;
	cin>>c>>k;
	if(k==0){
		cout<<c;
	}
	else{
		int x=1;
		for(int i=1; i<=k; i++){
			x*=10;
		}
		if(c%x>=x/2){
			c/=x;
			c+=1;
			c*=x;
		}
		else {
			c/=x;
			c*=x;
		}
		cout<<c;
	}
}
