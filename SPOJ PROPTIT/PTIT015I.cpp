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
	while(x--){
		int n, t;
		cin>>n>>t;
		int cnt=0;
		for(int i=1; i<=n; i++){
			int a;
			cin>>a;
			t-=a;
			if(t>=0) cnt++; 
		}
		cout<<cnt<<"\n";
	}
}
