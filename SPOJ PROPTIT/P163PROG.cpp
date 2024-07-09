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
	int n, x;
	cin>>n>>x;
	int cnt=0;
	for(int i=1; i<=n; i++){
		if(x%i==0&&x/i<=n){
			cnt++;
		}
	}
	cout<<cnt;
}
