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
	int x;
	cin>>x;
	int n=0;
	while(x>0){
		if(x%2==0){
			x/=2;
		}
		else{
			x-=1;
			n+=1;
		}
	}
	cout<<n;
}
