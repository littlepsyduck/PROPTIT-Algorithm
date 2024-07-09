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


int a[10004];
int main()
{
	fast();
	int n;
	cin>>n;
	a[1]=1;
	a[2]=3;
	for(int i=3; i<10004; i++){
		a[i]=a[i-1]+i;
	}
	int i=1;
	int cnt=0;
	while(a[i]<=n){
		n-=a[i];
		i++;
		cnt++;
	}
	cout<<cnt;

}
