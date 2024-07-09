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

struct rong 
{
	int c;
    int d;
	
	bool operator < (const rong other)
	{
		return c < other.c;
	}
}; 

int main()
{
	fast();
	ll n, s;
	cin>>s>>n;
    int cnt=0;
	rong a[n];
	for(int i=0; i<n; i++){
		
		cin>>a[i].c>>a[i].d;
    }
    sort(a, a+n);
    for(rong x : a){
		if(s>x.c) s+=x.d;
		else{
			cnt++;
			cout<<"NO";
			return 0;
		}
	}
	if(cnt==0) cout<<"YES";
}
