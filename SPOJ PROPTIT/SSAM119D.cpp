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


string s;
int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
        int ans=1;
		cin>>s;
		int l=s.size();
		s="x"+s;
		bool F[l+1][l+1];

		for(int i=1; i<=l; i++)
		{
			F[i][i]=true;
		}
		for(int len=2; len<=l; len++)
		{
			for(int i=1; i<=l-len+1; i++){
				int j=i+len-1;
				if(len==2&&s[i]==s[j]) F[i][j]=true;
                else {
                    F[i][j]=F[i+1][j-1] && (s[i]==s[j]);
                }
                if(F[i][j]) ans=max(ans, len);
			}
		}
        cout<<ans<<"\n";
	} 
}
