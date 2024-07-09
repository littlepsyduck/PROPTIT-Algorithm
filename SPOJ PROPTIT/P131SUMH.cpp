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
	int a, b, c;
	cin>>a>>b>>c;
	int cnt=0;
	while(c-a!=2){
		if(b-a<c-b){
			a=b;
			b+=1;
			cnt++;
		}
		else{
			c=b;
			b-=1;
			cnt++;
		}
	}
	cout<<cnt;
}
