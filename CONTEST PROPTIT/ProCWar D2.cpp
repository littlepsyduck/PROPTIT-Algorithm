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

void solve(){
	ll a, b;
	cin>>a>>b;
	if(a==0){
		cout<<"SoS";
		//cout<<"\n";
		return;
	}
	if(b==0){
		cout<<"x = C";
		//cout<<"\n";
		return;
	}
	ll x=__gcd(abs(a), abs(b));
	a/=x;
	b/=x;
	if(a==1){
		if(b==1){
			cout<<"x = -y + C";
		}
		else if(b==-1){
			cout<<"x = y + C";
		}
		else cout<<"x = "<<-b<<"y + C";
		//cout<<"\n";
	}
	else if(a==-1){
		if(b==1){
			cout<<"x = y + C";
		}
		else if(b==-1){
			cout<<"x = -y + C";
		}
		else cout<<"x = "<<b<<"y + C";
		//cout<<"\n";
	}
	else{
		if(a>0){
			cout<<"x = ("<<-b<<"/"<<a<<")y + C";
		}
		else{
			cout<<"x = ("<<b<<"/"<<-a<<")y + C";
		}
		//cout<<"\n";
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
