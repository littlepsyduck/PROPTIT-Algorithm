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


int a[Nmax];
int main()
{
	fast();
	int n, m;
	cin>>n>>m;
	int cnt=0;
	for(int i=0; i<=sqrt(n); i++){
		int b=n-i*i;
		int c=sqrt(m-i);
		if(c*c==m-i&&c==b){
			cnt++;
		}
	}
	cout<<cnt;
}
