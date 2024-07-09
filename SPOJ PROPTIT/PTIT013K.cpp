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


int a[1005];
int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
        ll s=0;
		a[0]=1;
		for(int i=1; i<10; i++){
			a[i]=a[i-1]*i;
		}
		int cnt=1;
        while(n>0){
            int c=n%10;
            s+=c*a[cnt];
            n/=10;
            cnt++;
        }
        cout<<s;
        cout<<"\n";
	} 
}
