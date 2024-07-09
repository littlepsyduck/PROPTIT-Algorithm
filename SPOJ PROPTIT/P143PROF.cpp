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

ll solve(ll x, ll k, ll mood){
	if(k==1) return x;
    if(k%2==0)
        return (solve(x, k/2, mood)*solve(x, k/2, mood))%mood;
	else{
		return (solve(x, k-1, mood)*x)%mood;
	}
}

int main()
{
	fast();
	ll n;
	cin>>n;
	cout<<solve(2,n-1,123456789);
}
