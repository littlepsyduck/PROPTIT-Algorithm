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
	while(t--){
		string s;
		cin>>s;
		memset(a, 0, sizeof(a));
		for(int i=0; i<s.size(); i++){
			a[s[i]]++;
		}
		int doi=0;
		for(int i='a'; i<='z'; i++){
			if(a[i]%2==1){
				doi++;
			}
		}
		if(s.size()%2==0){
			if(doi==0||doi==2){
				cout<<"YES";
			}
			else cout<<"NO";
		}
		else if(s.size()%2==1){
			if(doi==1||doi==3){
				cout<<"YES";
			}
			else cout<<"NO";
		}
		else cout<<"NO";
		cout<<"\n";
	}
}
