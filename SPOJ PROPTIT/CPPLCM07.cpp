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

ll ucln (ll a, ll b) {
	if(b==0) return a;
	return ucln(b, a%b);
}

ll bcnn (ll a, ll b) {
	return a/ucln(a, b)*b;
}

int main()
{
	fast();
    int t;
    cin>>t;
    while(t--)
    {
        int x, y, z, n;
        cin>>x>>y>>z>>n;
        ll t=bcnn(bcnn(x, y), z);
        ll min = pow(10, n-1);
        ll max = pow(10, n)-1;
        ll zz = (min+t-1)/t*t;
        if(zz<max){
            cout<<zz; 
        } 
        else cout<<-1;  
        cout<<"\n";
    }
	
}
