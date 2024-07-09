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
	int y, k, n;
	cin>>y>>k>>n;
	int cnt=0;
	if(n-y==0){
        cout<<-1;
        return 0;
    } 
    int x=((y/k)+1)*k;
	for(int i=x; i<=n; i+=k)
	{
		cout<<i-y<<" ";
		cnt++;
	}
	if(cnt==0) cout<<-1;
}
