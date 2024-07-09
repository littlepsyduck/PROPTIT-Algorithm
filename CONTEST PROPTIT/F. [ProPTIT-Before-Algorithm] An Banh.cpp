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
	ll n, k;
	cin>>n>>k;
    int k2=n%(k+1);
    if(k2==k) cout<<"Taro";
    else{
        if(k2%2!=0){	
            cout<<"Taro";
        }
        else{
            cout<<"Hanako";
        }
    }
	
}
