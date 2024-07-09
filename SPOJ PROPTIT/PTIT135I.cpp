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
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int cnt=1;
		for(int i=0; i<s.size(); i++){
            if(s[i]==s[i+1]) cnt++;
			else{
                cout<<cnt<<s[i];
                cnt=1;
            }
		}
		
        cout<<"\n";
	} 
}
