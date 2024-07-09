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

struct meo
{
	string ten;
	double cute, td;
	
	bool operator < (const meo other)
	{
		if(sqrt(cute)*sqrt(td) == sqrt(other.cute)*sqrt(other.td)) 
		return ten < other.ten; 
		else
		return sqrt(cute)*sqrt(td) > sqrt(other.cute)*sqrt(other.td);
	}
	
	
}; 

void solve(){
	int n;
	cin>>n;
	meo ds[n];
	cin.ignore();
	for(int i=0; i<n; i++)
	{
		cin>>ds[i].ten; 
        cin>>ds[i].cute;
		cin>>ds[i].td; 
	}
	sort(ds, ds+n);
	cout << ds[0].ten; 

}


int main()
{
	fast();
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<"\n";
	}
}
