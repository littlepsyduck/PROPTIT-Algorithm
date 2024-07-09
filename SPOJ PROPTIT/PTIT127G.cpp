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

vector<string> v;
int cmp(string a, string b){
	if(a.size()==b.size()){
		return a<b;
	}
	return a.size()<b.size();
}

int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
        s+=' ';
		string s2="";
		for(int i=0; i<s.size(); i++){
			if(s[i]>='0'&&s[i]<='9'){
				s2+=s[i];
			}
			else{
				while(s2[0]=='0'&&s2.size()>1){
					s2.erase(s2.begin());
				}
				if(s2!=""){
					v.pb(s2);
				}
				s2="";
			}
		}
	}
	sort(v.begin(), v.end(), cmp);
	for(int i=0; i<v.size(); i++){
		cout<<v[i];
		cout<<"\n";
	} 
}
