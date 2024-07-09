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
	int n, k;
	cin>>n>>k;
	int x=n-1;
	if(k%x==0){
		cout<<(k/x-1)+k<<" "<<(k/x)+k;
	}
	else{
		cout<<(k/x)+k<<" "<<(k/x)+k;
	}
}
