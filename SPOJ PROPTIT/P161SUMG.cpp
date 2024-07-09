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
	int a, b, c, d, e;
	cin>>a>>b>>c>>d>>e;
	int s=a+b+c+d+e;
	if(s>0&&s%5==0){
		cout<<s/5;
	}
	else cout<<-1;
}
