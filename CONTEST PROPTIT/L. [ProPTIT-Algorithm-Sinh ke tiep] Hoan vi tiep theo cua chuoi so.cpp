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

int n, k, a[Nmax];
int cnt, ok;

void init(){
	for(int i=1; i<=n; i++){
		a[i]=i;
	}
}

void sinh(string s){
	int i=s.length()-2;
	while(i>=0&&s[i]>=s[i+1]){
		i--;
	}
	if(i==-1) cout<<"BIGGEST";
	else{
		int k=s.length()-1;
		while(s[i]>=s[k])
			k--;
		swap(s[k],s[i]);
		reverse(s.begin()+i+1, s.end());
		cout<<s;
	}
}

void solve(){
	int x;
	cin>>x;
	string s;
	cin>>s;
	cout<<x<<" ";
	sinh(s);
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