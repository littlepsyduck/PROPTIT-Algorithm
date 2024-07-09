#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'
#define pb push_back

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
	while(t--){
		ll xa, ya, xb, yb;
		cin>>xa>>ya>>xb>>yb;
        if(ya*yb<0)
		    cout<<(int)sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
        else{
            yb=-yb;
            cout<<(int)sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
        }
		cout<<"\n";
	}
}
