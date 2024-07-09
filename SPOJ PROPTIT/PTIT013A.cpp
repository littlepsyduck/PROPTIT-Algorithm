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
        cin>>s;
        reverse(s.begin(), s.end()); 
        if(s[0]=='6'&&s[1]=='8'){
            cout<<1<<"\n"; 
        }
        else{
            cout<<0<<"\n";  
        }  
    }
    
}
