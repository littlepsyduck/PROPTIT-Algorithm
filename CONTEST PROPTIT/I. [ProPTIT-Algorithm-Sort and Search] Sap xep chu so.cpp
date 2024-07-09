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


ll a[Nmax];
int b[15];
int main()
{
	fast();
	int n;
	cin>>n; 
    ll x=0;
    int c=0;
	for(int i=0; i<n; i++){
		cin>>a[i];
        x=a[i];
		while(x>0){
			c=x%10;
            b[c]++;
			x/=10;
		}
	}
	for(int i=0; i<10; i++){
		while(b[i]>0){
			cout<<i<<" ";
            b[i]--;
		}
	}
}
