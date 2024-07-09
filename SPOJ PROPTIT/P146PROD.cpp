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
	int cnt=0;
    int a[t+5][5];
	for(int i=0; i<t; i++)
	{
        for(int j=0; j<3; j++)
        {
            cin>>a[i][j];
        }
	} 
    for(int i=0; i<t; i++){
        int cnt1=0;
        for(int j=0; j<3; j++){
            cnt1+=a[i][j];
        }
        if(cnt1>1) cnt++;
    }
	cout<<cnt;
}
