#include <bits/stdc++.h>
 using namespace std;

void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}

struct tet 
{
	string ten;
	double tuoi;
	
	bool operator < (const tet other)
	{
		if(tuoi == other.tuoi) 
		return ten < other.ten; 
		else
		return tuoi > other.tuoi;
	}
	
	
}; 


int main()
{
	fast();
	int n;
	cin>>n;
	tet ds[n];
	
	for(int i=0; i<n; i++)
	{
		cin.ignore(); 
		getline(cin, ds[i].ten); 
		cin>>ds[i].tuoi; 
	}
	
	sort(ds, ds+n);
	for(tet x : ds)
	{
		cout <<x.ten<<"\n"; 
	}	 
}


