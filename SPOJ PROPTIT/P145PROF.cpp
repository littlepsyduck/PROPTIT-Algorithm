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

struct nv
{
	int h;
	int m;
	
	bool operator < (const nv other)
	{
		if(h==other.h) 
			return m<other.m;
		return h<other.h;
	}
}; 

int main()
{
	fast();
	int n;
	cin>>n;
	nv sl[n];
	cin.ignore();
	for(int i=0; i<n; i++)
	{
		cin>>sl[i].h>>sl[i].m; 
	}
	sort(sl, sl+n);
	int cnt=0;
	int maxx=0;
	while(cnt<n){
		int c=cnt,s=0;
		while(sl[cnt].h==sl[c].h&&sl[cnt].m==sl[c].m){
			c++,s++;
		}
		cnt=c;
		if(s>maxx) maxx=s;
	}	 
	cout<<maxx;
}

