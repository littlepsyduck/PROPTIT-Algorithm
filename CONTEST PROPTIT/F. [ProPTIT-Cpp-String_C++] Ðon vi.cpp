#include <bits/stdc++.h>
 using namespace std;

void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}

string str;
int main()
{
	fast(); 
	int t;
	cin>>t;
	cin.ignore();
	while(t>0)
	{
		long long s=0;
		int dv=0; 
		long long sum=0; 
		getline(cin, str);
		str=str+' ';
		for(int i=0; i<str.size(); i++)
		{
			if(str[i]>='0' && str[i]<='9') 
			{
				s=s*10+(str[i]-48);  
			}  
			else if(str[i]>='a' && str[i]<='z')
			{
				dv+=str[i]; 
			}
			else
			{
				if(dv==216)
				{
					sum+=s*1000000;
					dv=0; s=0;
				}
				else if(dv==213)
				{
					sum+=s*100000;	
					dv=0; s=0;
				}
				else if(dv==306)
				{
					sum+=s*10000;
					dv=0; s=0;	
				}	
				else if(dv==109)
				{
					sum+=s*1000;
					dv=0; s=0;	
				} 
				else if(dv==209)
				{
					sum+=s*100;
					dv=0; s=0;	
				} 
				else if(dv==208)
				{
					sum+=s*10;
					dv=0; s=0;	
				} 
				else if(dv==218)
				{
					sum+=s;
					dv=0; s=0; 
				} 
			} 
		}
		cout << sum << "mm";
		t--;
		if (t>0) cout <<"\n";
	} 
} 
