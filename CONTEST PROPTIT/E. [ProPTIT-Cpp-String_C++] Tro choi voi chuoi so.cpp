#include <bits/stdc++.h>
 using namespace std;

void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}

string s[100005];
int b[100005], d[100005], p[100005]; 
int main()
{
	fast();
	long long n, q;
	cin>>n>>q;
	cin.ignore(); 
	for(long long i=1; i<=n; i++)
	{
		cin>>s[i]; 
	}
	int cnt=n; 
	while(q--)
	{
		char c;
		cin>>c;
		int x=c;
		if(p[x]>0){
			cout<<cnt<<"\n";
			continue; 
		} 
		p[x]++; 
		for(int i=1; i<=n; i++)
		{
			if(d[i]==1)
			{
				continue; 
			}
			else
			{
				for(int j=0; j<s[i].size(); j++)
				{
					if(s[i][j]==c)
					{
						d[i]=1;
						cnt--; 
						break; 
					}	
				}
			} 
		}
		cout<<cnt<<"\n"; 
	} 
}

