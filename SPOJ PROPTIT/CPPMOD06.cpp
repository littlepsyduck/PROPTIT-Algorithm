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

ll luythua(ll x, ll y, ll z){
    if(y==0) return 1;
    ll d=luythua(x, y/2, z);
    if(y%2==0) return (d*d)%z;
    else return ((d*d)%z*x)%z;
}

int main()
{
	fast();
	int t;
    cin>>t;
    while(t--){
        string a;
        int b, c;
        cin>>a>>b>>c;
        ll k=0;
        for(int i=0; i<a.size(); i++){
            k=((k*10)%c+(a[i]-'0'))%c;
        }
        cout<<luythua(k, b, c)<<"\n";
    }
}
