#include <bits/stdc++.h>
using namespace std;

int main()
{
	char x[1], str[1005];
	cin>>x>>str;
	int d;
	if(x[0]=='L') d=1;
	else d=-1; 
	char s1[15]="qwertyuiop";
	char s2[15]="asdfghjkl;";
	char s3[15]="zxcvbnm,./";	
	int l=strlen(str), l1=strlen(s1), l2=strlen(s2), l3=strlen(s3); 
 
		for(int i=0; i<l; i++)
		{	
			int k=0; 
			for(int j=0; j<l1; j++)
			{
				if(str[i]==s1[j]){
					if(d==1&&j+d>9)
					{
						str[i]=s1[0];
						k=1; 
						break; 
					} 
					else if(d==-1&&j+d<0)
					{
						str[i]=s1[9];
						k=1; 
						break;
					 } 
					else
					{
						str[i]=s1[j+d];
						k=1;	
						break; 
					 }  
				}
			}
			if(k==0)
			{
				for(int k=0; k<l2; k++)
				{
					if(str[i]==s2[k]){
						if(d==1&&k+d>9)
						{
							str[i]=s2[0];
							k=1; 
							break; 
						} 
						else if(d==-1&&k+d<0)
						{
							str[i]=s2[9];
							k=1; 
							break;
						 } 
						else
						{
							str[i]=s2[k+d];
							k=1; 
							break; 
					 	}  
					}
				}
			}
			if(k==0)
			{
				for(int h=0; h<l3; h++)
				{
					if(str[i]==s3[h]){
						if(d==1&&h+d>9)
						{ 
							str[i]=s3[0];
							k=1; 
							break; 
						} 
						else if(d==-1&&h+d<0)
						{
							str[i]=s3[9];
							k=1; 
							break;
						 } 
						else
						{
							str[i]=s3[h+d];
							k=1; 
							break; 
					 	}  
					}
				}
			} 
		}
	
	cout<<str; 
}
