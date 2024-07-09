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

ll x[Nmax];
vector<ll> v1, v2;
void solve(){
    int a, b;
    cin>>a>>b;
    int n;
	cin>>n;
	for(int i=0; i<n; i++) cin>>x[i];
    v1.clear();
    v2.clear();
    ll x1=0, x2=0;
    for(int i=0; i<n; i++){
        if(x[i]%a==0){
            v1.pb(x[i]);
            x1+=x[i];
        }
        
        if(x[i]%b==0){
            v2.pb(x[i]);
            x2+=x[i];
        }
        
    }
    
    if(x1>x2) cout<<"YES";
    else cout<<"NO";

}

int main()
{
	fast();
	int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
}
