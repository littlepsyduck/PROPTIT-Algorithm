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


string s;
string s2;
int main()
{
	fast();
	cin>>s;
	int cnt=0;
    int l=s.length();
	for(int i=0; i<l-1; i++){
		if(s[i]=='('&&s[i+1]=='('){
			s2=s2+'(';
		}
		else if(s[i]==')'&&s[i+1]==')'){
			s2=s2+')';
		}
	}
    int l2=s2.length();
	for(int i=0; i<l2; i++){
		if(s2[i]=='('){
			for(int j=i+1; j<l2; j++){
				if(s2[j]==')')  cnt++;
			}
		}
	}
	cout<<cnt;
}
