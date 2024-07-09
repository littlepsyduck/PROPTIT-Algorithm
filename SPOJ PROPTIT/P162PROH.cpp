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


int d[Nmax];
int main()
{
	fast();
	int x;
	cin>>x;
	d[1]=1;
	for(int i=2; i<=10005; i++){
		d[i]=d[i-1]+i;
	}
	int cnt=0;
	for(int i=1; i<=10005; i++){
		x-=d[i];
        if(x>=0){
		cnt++;
        }
        else break;
	}
	cout<<cnt;
}
