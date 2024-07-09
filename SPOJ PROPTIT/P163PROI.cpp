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
	int d1, d2, d3;
	cin>>d1>>d2>>d3;
	cout<<min(d1+d2+d3, min(d1*2+d3*2, min(d2*2+d3*2, d1*2+d2*2)));
}
