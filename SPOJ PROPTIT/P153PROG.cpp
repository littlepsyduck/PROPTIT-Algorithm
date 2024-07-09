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
	ll n, k;
	cin>>n>>k;
	if(n%2==0){
		if(k<=n/2){
			cout<<k+(k-1);
		}
		else{
			cout<<k+(k-n);
		}
	}
	else{
		if(k<=n/2+1){
			cout<<k+(k-1);
        }
		else{
			cout<<k+(k-n)-1;
		}
	}
}

