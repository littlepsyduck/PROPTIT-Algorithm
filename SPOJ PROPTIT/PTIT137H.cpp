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

const ll mod2 = 61;
ll luythua(ll a, ll b){
	if(b==0) return 1ll;
	ll x=luythua(a, b/2);
	if(b%2==0) return (x*x)%mod2;
	else return ((x*x)%mod2*a)%mod2;
}

int a[Nmax];
int main()
{
	fast();
	string s;
	for(int i='0'; i<='9'; i++){
		a[i]=i-'0';
	}
	for(int i='a'; i<='z'; i++){
		a[i]=i-61;
	}
	for(int i='A'; i<='Z'; i++){
		a[i]=i-55;
	}
	while(cin>>s){
		if(s=="end") return 0;
		else{
			ll sum=0;
			for(int i=s.size()-1; i>=0; i--){
				sum=(sum+(a[s[i]]*luythua(62, i-(s.size()-1)))%mod2)%mod2;
			}
			if(sum==0) cout<<"yes";
			else cout<<"no";
			cout<<"\n";
		}
	}
}
