#include <bits/stdc++.h>
 using namespace std;

void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}

struct sv
{
	string ten;
	float toan, li, c;
	
	bool operator < (const sv other)
	{
		if(toan + li + c == other.toan + other.li + other.c) 
		return ten < other.ten; 
		else
		return toan + li + c > other.toan + other.li + other.c;
	}
	
	
}; 


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


