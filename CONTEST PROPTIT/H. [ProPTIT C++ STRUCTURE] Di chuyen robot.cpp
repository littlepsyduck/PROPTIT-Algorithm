#include <bits/stdc++.h>
 using namespace std;

void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}

int a, b;
int main()
{
	fast();
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		cin.ignore(); 
		string s;
		getline(cin, s); 
		for(int i=0; i<s.size(); i++)
		{
			if(s[i]=='G')		b+=1;				 	
			else if(s[i]=='L')	a-=1;	 
			else if(s[i]=='R')	a+=1;	 
			else if(s[i]=='B')	b-=1;		
		}
		cout << a <<" "<< b;
		a=0;
		b=0; 
		t--;
		if(t>0) cout<<"\n";
	}
}

