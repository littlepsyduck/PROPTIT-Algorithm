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
bool cmp(ll x, ll y){
    return x>y;
}
vector<ll> v;
int main()
{
	fast();
	ll n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        a[s[i]]++;
    }
    for(int i='A'; i<='Z'; i++){
        v.pb(a[i]);
    }
    sort(v.begin(), v.end(), cmp);
    int i=0;
    ll p=0;
    while(k>0){
        if(k<=v[i]){
            p+=k*k;
            k=0;
        }
        else{
            p+=v[i]*v[i];
            k-=v[i];
            i++;
        }
    }
    cout<<p;
}
