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
	int t;
	cin>>t;
	int n=0;
    for(int i=1; i<=t; i++){
		string s;
		cin>>s;
		if(s=="++X") ++n;
		else if(s=="X++") n++;
		else if(s=="--X") --n;
		else if(s=="X--") n--;
    }
	cout<<n; 
}
