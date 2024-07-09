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
	for(int i=0; i<n; i++){
		if(s[i]!='4'&&s[i]!='7'){
			cout<<"NO";
			return 0;
		}
	}
	int cnt1=0, cnt2=0;
	for(int i=0; i<n/2; i++){
		cnt1+=s[i];
	}
	for(int i=n/2; i<n; i++){
		cnt2+=s[i];
	}
	if(cnt1==cnt2) cout<<"YES";
	else cout<<"NO";
}
