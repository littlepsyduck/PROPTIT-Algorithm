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
	string s;
	cin>>s;
    for(int i=0; i<s.size(); i++){
		if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
	}
	for(int i=0; i<s.size(); i++){
		if(s[i]!='a' && s[i]!='o' && s[i]!='y' && s[i]!='e' && s[i]!='u' && s[i]!='i'){
			cout<<"."<<s[i];
		}
	}
}