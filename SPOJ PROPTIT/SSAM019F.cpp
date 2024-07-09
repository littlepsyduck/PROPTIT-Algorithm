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

ll fibo[1005];
void fibonacci()
{
	fibo[0]=0, fibo[1]=1;
	for(int i=2; i<=1000; i++)
	{
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
}

int main()
{
	fast();
    fibonacci();
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		cout<<fibo[n];
        t--;
        if(t>0) cout<<"\n";
	} 
}
