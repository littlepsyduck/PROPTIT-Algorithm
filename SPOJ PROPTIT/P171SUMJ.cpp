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



int main()
{
	fast();
	double a, b, c;
	cin>>a>>b>>c;
	if(a==0){
		if(b==0){
			if(c==0) cout<<-1;
			else cout<<0;
		}
		else cout<<1<<"\n"<<fixed<<setprecision(5)<<-c/b;
	}
	else{
		double d=b*b-4*a*c;
		if(d<0) cout<<0;
		else if(d==0) cout<<1<<"\n"<<fixed<<setprecision(5)<<-b/(2*a);
		else{
			cout<<2<<"\n";
			double x1=(-b-sqrt(d))/(2*a), x2=(-b+sqrt(d))/(2*a);
			if(a>0) cout<<fixed<<setprecision(5)<<x1<<"\n"<<fixed<<setprecision(5)<<x2;
			else cout<<fixed<<setprecision(5)<<x2<<"\n"<<fixed<<setprecision(5)<<x1;
		}
	}
}
