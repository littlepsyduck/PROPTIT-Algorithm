#include <bits/stdc++.h>
using namespace std;

string str[105];
bool cmp(string x,string y){
	return x+y<y+x; 
} 

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n; i++)
		{
			cin>>str[i];
			
		}
		sort(str+1, str+n+1, cmp); 
		for(int i=1; i<=n; i++)
		{
			cout<<str[i]; 
			
		} 
		cout<<"\n"; 
	} 
} 
