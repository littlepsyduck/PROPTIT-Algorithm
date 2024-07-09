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

string cong(string a, string b){
	string s="";
	while(a.size()<b.size()) a='0'+a;
	while(a.size()>b.size()) b='0'+b;
	int du=0;
	for(int i=a.size()-1; i>=0; i--){
		int res=(a[i]-48)+(b[i]-48)+du;
		du=res/10;
		s=char(res%10+48)+s;
	}
	if(du!=0) s=char(du+48)+s;
	return s;
}


int main()
{
	fast();
	string s0;
	cin>>s0;
	string h="", m="", s="", t="";
	h=h+s0[0]+s0[1];
	m=m+s0[3]+s0[4];
	s=s+s0[6]+s0[7];
	t=t+s0[8]+s0[9];
	if(t=="AM"){
		if(h=="12") cout<<"00:"<<m<<":"<<s;
		else cout<<h<<":"<<m<<":"<<s;
	}
	else{
		if(h=="12") cout<<h<<":"<<m<<":"<<s;
		else{
			h=cong(h, "12");
			cout<<h<<":"<<m<<":"<<s;
		}
	}
}
