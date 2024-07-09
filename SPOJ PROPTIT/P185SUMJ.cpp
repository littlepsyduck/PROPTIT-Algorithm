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
	int n, a, b;
	cin>>n>>a>>b;
	int c=0;
	int cnt=0;
	for(int i=1; i<=n; i++){
		int x;
		cin>>x;
		if(x==1){
			if(a>0) a--;
			else if(c>0) c--;
			else if(b>0) b--, c++;
			else cnt++;
		}
		else{
			if(b>0) b--;
			else cnt+=2;
		}
	}
	cout<<cnt;
}
