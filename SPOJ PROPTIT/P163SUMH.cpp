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
	int a, b;
	cin>>a>>b;
	int min=0, minmax=0, max=0;
	for(int i=1; i<=6; i++){
		if(abs(i-a)==abs(i-b)) minmax++;
		else if(abs(i-a)<abs(i-b)) min++;
		else max++;
	}
	cout<<min<<" "<<minmax<<" "<<max;
}
