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


int a[10004];
int main()
{
	fast();
    int x, y;
    cin>>x>>y;
	int n;
	cin>>n;
	if(n%6==0) cout<<x-y;
    else if(n%6==1) cout<<x;
    else if(n%6==2) cout<<y;
    else if(n%6==3) cout<<y-x;
    else if(n%6==4) cout<<-x;
    else if(n%6==5) cout<<-y;
}
