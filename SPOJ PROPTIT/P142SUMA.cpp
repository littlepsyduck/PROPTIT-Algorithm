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
	n*=2;
    int c=0;
	for(int i=1; i<=sqrt(n); i++){
		int a=n-i*(i+1);
		int d=1+4*a;
		int x=sqrt(d);
		if(x*x==d&&(x-1)%2==0&&x!=1){
			cout<<"YES";
			c++;
            break;
		}
	}
	if(c==0) cout<<"NO";
}
