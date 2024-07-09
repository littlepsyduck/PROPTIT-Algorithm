#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}

struct xe
{
	ll ten;
	ll gia, tgian; 
};

bool cmp(xe a, xe b)
{
	return a.gia*b.tgian > b.gia*a.tgian; 
} 

int main()
{
	fast();
	int n;
	cin>>n;
	xe a[n+5];
	for(int i=0; i<n; i++)
	{
		a[i].ten = i+1;
		cin>>a[i].gia; 
	}	
	for(int i=0; i<n; i++)
	{
		cin>>a[i].tgian; 
	} 
	sort(a, a+n, cmp);
	ll ans=0; 
	ll tgian=0;
	for(int i=0; i<n; i++)
	{
		tgian = tgian + a[i].tgian;
		ll k = a[i].gia*tgian;
		ans += k; 
	}
	cout<< ans <<"\n";
	for(int i=0; i<n; i++)
	{
		cout<< a[i].ten << " "; 
	} 
}

