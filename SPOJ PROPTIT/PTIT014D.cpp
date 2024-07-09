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

int sonen (int n) {
	int s=0; 
	while(n>0){
		int a=n%10;
		s+=a;
		n/=10; 
	} 
	return s; 
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
		int l=s.size();
		int sum=0;
		for(int i=0; i<l; i++){
			sum+=s[i]-'0';
		}
		while(sum>=10){
			sum=sonen(sum);
		}
		if(sum==9) cout<<1;
		else cout<<0;
		cout<<"\n";
	} 
}
