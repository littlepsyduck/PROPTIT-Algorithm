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


int a[1005];
string s0="ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main()
{
	fast();
	int t;
	cin>>t;
    cin.ignore();
	while(t--){
		memset(a, 0, sizeof(a));
		string s;
		getline(cin, s);
		int maxx=0, vt=0;
		for(int i=0; i<s.size(); i++){
			if(s[i]==' ') continue;
			a[s[i]]++;
			if(a[s[i]]>maxx){
				maxx=a[s[i]];
				vt=i;
			}
		}
		int d=0;
		for(int i='A'; i<='Z'; i++){
			if(a[i]==maxx) d++;
			if(d>1) break;
		}
		if(d>1){
			cout<<"NOT POSSIBLE\n";
 
		}
		else{
			d=s[vt]-'E';
			if(d<0) d+=26;
			cout<<d<<" ";
			for(int i=0; i<s.size(); i++){
				if(s[i]==' '){
					cout<<s[i];
					continue;
				}
				cout<<s0[s[i]-'A'-d+26];
			}
			cout<<"\n";
		}
	}
}
