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
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	for(int i=1; i<=3; i++){
        int t;
        cin>>t;
        int cnt=0;
        int n=t;
        n%=(a+b);
        if(n>0&&n<=a) cnt++;
        n=t;
        n%=(c+d);
        if(n>0&&n<=c) cnt++;
        if(cnt==2) cout<<"both\n";
        else if(cnt==1) cout<<"one\n";
        else cout<<"none\n";
    }
}
