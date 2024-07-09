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
	int t;
	cin>>t;
	queue<int> x;
	int a;
	while(t--)
	{
		cin>>a;
		if(a==1) cout<<x.size()<<"\n";
		else if(a==2){
			if(x.empty()) cout<<"YES"<<"\n";
			else cout<<"NO"<<"\n";
		}
		else if(a==3){
			cin>>a;
			x.push(a);
		}
		else if(a==4){
			if(!x.empty()) x.pop();
		}
		else if(a==5){
			if(x.empty()) cout<<-1<<"\n";
			else{
				cout<<x.front()<<"\n";
			}
		}
		else if(a==6){
			if(x.empty()) cout<<-1<<"\n";
			else{
				queue<int> y=x;
				while(y.size()>1) y.pop();
				cout<<y.front()<<"\n";
			}
		}
	} 
}
