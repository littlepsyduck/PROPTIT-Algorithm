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

int n, a[Nmax];
string s;
vector<string> v;

void push(){
	string s="";
	for(int i=1; i<=n; i++){
		s+=(char)(a[i]+'0');
	}
	v.pb(s);
}

void Try(int i){
	for(int j=1; j<=n; j++){
		a[i]=j;
		if(i==n) push();
		else Try(i+1);
	}
}

void solve(){
	cin>>n;
    Try(1);
    s="";
	for(int i='A'; i<='A'+n-1; i++){
		s+=i;
	}
	do{
		for(string c : v){
			cout<<s<<c<<"\n";
		}
	}while(next_permutation(s.begin(), s.end()));
}

int main()
{
	fast();
	solve();
}
