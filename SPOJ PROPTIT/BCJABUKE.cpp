#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'

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
	int n, m, j;
	cin>>n>>m>>j;
	int cnt=0;
	int a[j];
	for(int i=0; i<j; i++){
		cin>>a[i];
	}
	int l=0, r=m;
	for(int i=0; i<j; i++){
		if(a[i]>r){
			cnt+=a[i]-r;
			r=a[i];
			l=r-m+1;
		}
		else if(a[i]<l){
			cnt+=l-a[i];
			l=a[i];
			r=l+m-1;
		}
	}
	cout<<cnt;
}
