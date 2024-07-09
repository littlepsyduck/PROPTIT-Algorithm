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
	string s0=" ABCDEFGHIJKLMNOPQRSTUVWXYZ_.ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
	string s;
	int n;
	while(cin>>n){
		if(n==0) return 0;
		else{
			cin>>s;
			string ss="";
			for(int i=0; i<s.size(); i++){
				for(int j=0; j<s0.size(); j++){
					if(s[i]==s0[j]){
						ss=ss+s0[j+n];
						break;
					}
				}
			}
			for(int i=ss.size()-1; i>=0; i--){
				cout<<ss[i];
			}
		}
		cout<<"\n";
	}
}
