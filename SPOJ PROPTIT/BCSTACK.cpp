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
	string s;
	int n;
	stack<int> a;
	while(cin>>s)
	{
		if(s=="end") return 0;
		else{
			if(s=="init"){
				while(a.empty()==0){
			 		a.pop();
				}
			}
			else if(s=="push"){
				cin>>n;
				a.push(n);
			}
			else if(s=="pop"){
				if(a.empty()==0) a.pop();
			} 
			else if(s=="top"){
				if(a.empty()==1) cout<<-1<<"\n";
				else cout<<a.top()<<"\n";
			}
			else if(s=="size"){
				cout<<a.size()<<"\n";
			}
			else if(s=="empty"){
				cout<<a.empty()<<"\n";
			}
		}
	} 
}
