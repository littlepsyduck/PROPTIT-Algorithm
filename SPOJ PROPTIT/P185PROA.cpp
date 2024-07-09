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
void solve(){
	string s;
	cin>>s;
	int d=1;
	for(int i=0; i<s.size(); i++){
		if(s[i]=='9'&&d==1){
			cout<<9;
			d++;
			continue;
		}
		if(s[i]<='4') cout<<s[i], d++;
		else cout<<9-s[i]+'0', d++;
	}
}
int main()
{
	fast();
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<"\n";
    }
}
	
