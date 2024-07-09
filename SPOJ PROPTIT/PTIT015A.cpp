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


int a[Nmax];
int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		for(int i=0; i<3; i++){
			string s;
			cin>>s;
			for(int j=0; j<s.size(); j++){
				a[s[j]-'0']++;
			}
		}
		string x="";
		for(int i=9; i>=0; i--){
			while(a[i]>0){
				x+=char(i+'0');
				a[i]--;
			}
		}
		cout<<x;
		cout<<"\n";
	} 
}
