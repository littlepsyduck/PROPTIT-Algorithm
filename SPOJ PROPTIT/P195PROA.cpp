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
	int n;
	cin>>n;
	int x=(n/7)*2;
	int x0=x;
	int t=n%7;
	if(t==6) x0++;
	x+=min(t, 2);
    if(x0>x){
        int res=x0;
        x0=x;
        x=res;
    }
	cout<<x0<<" "<<x;
}
