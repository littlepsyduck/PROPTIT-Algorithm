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

ll binpow (ll a, ll b) {
    if(b==0) return 1;
    ll X = binpow(a, b/2);
    if(b%2==1){
        return (X%mod)*(X%mod)%mod*(a%mod)%mod;
    }
    else{
        return (X%mod)*(X%mod)%mod;
    }
}

int main()
{
    fast();
    ll a, b;
    while(cin>>a>>b)
    {
        if(a==0&&b==0) return 0;
        else
            cout<<binpow(a, b);
        cout<<"\n";
    }
    
}
