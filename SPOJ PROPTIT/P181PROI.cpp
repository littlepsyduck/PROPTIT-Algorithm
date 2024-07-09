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
	int n;
	cin>>n;
	string s;
	cin>>s;
	int cnt=0;
	for(int i=2; i<s.size(); i++){
		if(s[i]=='0'){
			if(s[i-1]=='1'&&s[i-2]=='0'){
				cnt++;
				s[i]=1;
			}
		}
	}
	cout<<cnt;
}
