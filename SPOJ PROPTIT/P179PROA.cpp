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


string s;
int main()
{
	fast();
	int n;
	cin>>n;
	int cnt=0, maxx=0;
	for(int i=1; i<=n; i++){
		string ss;
		cin>>ss;
		int k, m;
		cin>>k>>m;
		int c=0;
		while(k<=m){
			cnt+=m/k;
			c+=m/k;
			int nho=(m/k)*2;
			m=m%k+nho;
		}
		if(c>maxx){
			maxx=c;
			s=ss;
		}
	}
	cout<<cnt<<"\n";
	cout<<s;
}
