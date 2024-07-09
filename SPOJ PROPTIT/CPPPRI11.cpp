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

bool nt (ll n){
    for (ll i=2; i <= sqrt (n); i++){
        if (n%i == 0)
        return 0;
    }
    return n>1;
}
bool check ( ll n){
    for (ll i = 1; i<= 32; i++){
        if (nt(i)){
            ll tmp =(ll)pow (2,i)-1;
            if (nt(tmp)){
                ll x = 1ll * tmp *(ll)pow (2, i-1);
                if (x == n)
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
    	cin >> n;
    	if (check (n)) cout << "1";
    	else cout << "0";
        cout<<"\n";
	} 
}
