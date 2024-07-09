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
	int t0=t;
	while(t--)
	{
		int x;
		cin>>x;
		string s;
		cin>>s;
		int a=0, b=0, c=0, d=0, e=0, f=0, g=0, k=0;
		for(int i=2; i<s.size(); i++)
		{
			if(s[i-2]=='T'&&s[i-1]=='T'&&s[i]=='T') a++;
			else if(s[i-2]=='T'&&s[i-1]=='T'&&s[i]=='H') b++;
			else if(s[i-2]=='T'&&s[i-1]=='H'&&s[i]=='T') c++;
			else if(s[i-2]=='T'&&s[i-1]=='H'&&s[i]=='H') d++;
			else if(s[i-2]=='H'&&s[i-1]=='T'&&s[i]=='T') e++;
			else if(s[i-2]=='H'&&s[i-1]=='T'&&s[i]=='H') f++;
			else if(s[i-2]=='H'&&s[i-1]=='H'&&s[i]=='T') g++;
			else if(s[i-2]=='H'&&s[i-1]=='H'&&s[i]=='H') k++;
		}
		cout<<x<<" "<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<k<<"\n";


	} 
}
