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


int cnt;
int main()
{
	fast();
	float a,b,c,d;
	cin>>a>>b>>c>>d;
	float s1=abs(a/c-b/d), s2=abs(c/d-a/b), s3=abs(d/b-c/a), s4=abs(b/a-d/c);
	if(s2>s1){
		cnt=1;
		s1=s2;
	}
	if(s3>s1){
		cnt=2;
		s1=s3;
	}
	if(s4>s1){
		cnt=3;
		s1=s4;
	}
	cout<<cnt;
}
