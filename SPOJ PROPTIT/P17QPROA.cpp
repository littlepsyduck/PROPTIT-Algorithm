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
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n==0){
			cout<<1<<"\n";
			continue;
		}
		int cnt=0;
		for(int i=0; i<=sqrt(n); i++){
			int x=n-i*i;
			if(sqrt(x)==(int)sqrt(x)) cnt++;
		}
		cout<<cnt/2<<"\n";
	}
}
