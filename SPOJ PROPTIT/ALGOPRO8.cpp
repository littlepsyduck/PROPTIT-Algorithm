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
	int a,b;
	cin>>a>>b;
	if(a>b)
        cout<<b<<" "<<(a-b)/2;
	else if(a==b) 
        cout<<a<<" 0";
	else
        cout<<a<<" "<<(b-a)/2;
}
