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
	string a, b;
	cin>>a>>b;
	string c;
    c=a;
    string d;
    d=b;
    int x, y, z, t;
	for(int i=0; i<a.size(); i++){
		if(a[i]=='6'){
			a[i]='5';
			
		} 
	}
    x=stoi(a);
    for(int i=0; i<b.size(); i++){
		if(b[i]=='6'){
			b[i]='5';
			
		} 
	}
    z=stoi(b);
    cout<<x+z<<" ";
	for(int i=0; i<c.size(); i++){
		if(c[i]=='5'){
			c[i]='6';
			
		} 
	}
    y=stoi(c);
	
	for(int i=0; i<d.size(); i++){
		if(d[i]=='5'){
			d[i]='6';
			
		} 
	}
    t=stoi(d);
	cout<<y+t;
}
