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

struct hoahau
{
	string ten;
	double cao, nang;
	
	bool operator < (const sv other)
	{
		if(cao/nang == other.cao / other.nang) 
		return ten < other.ten; 
		else
		return cao/nang > other.cao / other.nang;
	}
}; 



int main()
{
	fast();
	 
}



int main()
{
	fast();
	int n;
	cin>>n;
	sv ds[n];
	cin.ignore();
	for(int i=0; i<n; i++)
	{
		getline(cin, ds[i].ten); 
	}
	for(int i=0; i<n; i++)
	{
		cin>>ds[i].toan;
		cin>>ds[i].li;
		cin>>ds[i].c; 
	}
	sort(ds, ds+n);
	for(sv x : ds)
	{
		cout << x.ten<<" "<<x.toan<<" "<<x.li<<" "<<x.c<<"\n"; 
	}	 
}
 