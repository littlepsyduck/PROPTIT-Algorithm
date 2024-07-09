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
	string s;
	cin>>s;
	if(s[0]!='-'){
		cout<<s;
		return 0;
	}
	else{
		int l=s.size();
		s=' '+s;
		string s2="";
		if(s[l-1]>s[l]){
			for(int i=0; i<l-3; i++){
				s2=s2+s[i];
			}
			s2=s2+s[l];
			if(s2=="-0"|| s2=="-") cout<<0;
			else cout<<s2;
			return 0;
		}
		else{
			for(int i=0; i<l-2; i++){
				s2=s2+s[i];
			}
			if(s2=="-0"|| s2=="-") cout<<0;
			else cout<<s2;
			return 0;
		}
	}
}
