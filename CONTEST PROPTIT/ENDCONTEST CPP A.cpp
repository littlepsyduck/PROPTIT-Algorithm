#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'

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
	char s[1005];
    gets(s);
    strupr(s);
    int l=strlen(s);
    for(int i=0;i<l-1;i++)
    {
        for(int j=i+1;j<l;j++)
        {
            if(s[i]>=s[j]){
                int tmp=s[i];
                s[i]=s[j];
                s[j]=tmp;
            }
        }
            
    }
        
    int cnt = 1;
    for(int i=0;i<l;i++)
        if(s[i]!=' '&&s[i+1]!=' '){
        	if(s[i]==s[i+1]) cnt++;
        	else {
            	cout<<s[i]<<" "<<cnt<<"\n";
            	cnt=1;
            }
		} 
		
}
