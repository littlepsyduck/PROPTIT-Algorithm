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
	string t;
	while(cin>>t)
	{
		if(t=="0") return 0;
		else{
			ll cnt=0;
			for(ll i=0; i<t.size(); i++){
				ll x=t[i]-'0';
                if(x>4) x--;
                cnt=cnt*9+x;
			}
			cout<<t<<": "<< cnt <<"\n";
	    }
    } 
}
