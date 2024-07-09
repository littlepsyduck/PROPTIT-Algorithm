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

bool check(string x){
	for(int i=0; i<x.size(); i++){
		if(x[i]=='?') return true;
	}
	return false;
}

string tru(string x, string y){
	string s="";
	while(y.size()<x.size()) y='0'+y;
	int nho=0;
	for(int i=x.size()-1; i>=0; i--){
		int z=x[i]-48, t=y[i]-48, res=0;
		if(z<t+nho){
			z+=10;
			res=z-t-nho;
			nho=1;
		}
		else{
			res=z-t-nho;
			nho=0;
		}
		s=char(res+48)+s;
	}
	while(s.size()>1&&s[0]=='0') s.erase(0, 1);
	return s;
}

string cong(string x, string y){
	string s="";
	while(y.size()<x.size()) y='0'+y;
	while(y.size()>x.size()) x='0'+x;
	int nho=0;
	for(int i=x.size()-1; i>=0; i--){
		int res=(x[i]-48)+(y[i]-48)+nho;
		nho=res/10;
		s=char(res%10+48)+s;
	}
	if(nho!=0){
		s=char(nho+48)+s;
	}
	return s;
}

int main()
{
	fast();
	string a, b, c;
	cin>>a>>b>>c;
	if(check(a)){
		string x=tru(c, b);
		for(int i=0; i<a.size(); i++){
			if(a[i]=='?'){
				cout<<x[i];
				return 0;
			}
		}
	}
	else if(check(b)){
		string x=tru(c, a);
		for(int i=0; i<b.size(); i++){
			if(b[i]=='?'){
				cout<<x[i];
				return 0;
			}
		}
	}
	else{
		string x=cong(a, b);
		for(int i=0; i<c.size(); i++){
			if(c[i]=='?'){
				cout<<x[i];
				return 0;
			}
		}
	}
}
