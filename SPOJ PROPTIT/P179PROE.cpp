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


double a[Nmax];
int main()
{
	fast();
	int n;
	cin>>n;
	double s=0;
	for(int i=1; i<=n; i++){
		cin>>a[i];
		s+=a[i];
	}
	sort(a+1, a+n+1);
	double ss=0, cnt=0, stk=0, ts=0, maxx=0;
	double stk1=0, ts1=0;
	for(int i=n; i>=1; i--){
		cnt++;
		ss+=a[i];
		stk1=cnt/n*100;
		ts1=ss/s*100;
		if(ts1-stk1>maxx){
			maxx=ts1-stk1;
			ts=ts1;
			stk=stk1;
		}
	}
	cout<<fixed<<setprecision(1)<<stk<<" "<<fixed<<setprecision(1)<<ts;
}
