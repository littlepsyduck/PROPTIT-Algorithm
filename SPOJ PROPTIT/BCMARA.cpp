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
	int n;
	cin>>n;
	int z[n];
	int x=0;
	for(int i=0; i<n; i++)
	{
		int a, b, c;
		cin>>a>>b>>c;
		x=a*10000.0+b*100.0+c;
		z[i]=x;
	} 
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if(z[j] < z[i]) {
				int temp =  z[i];
				z[i] = z[j];
				z[j] = temp; 
			} 
		} 
	} 
	int d, e, f;
	for (int i = 0; i < n; i++) {
		d=z[i]%100;
		e=((z[i]-d)/100)%100;
		f=((z[i]-e*100-d)/10000)%100;
		cout<<f<<" "<<e<<" "<<d<<"\n";
	}
}
