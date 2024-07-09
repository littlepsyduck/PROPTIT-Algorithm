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


vector<int> a, b;
int main()
{
	fast();
	int n;
    cin>>n;
    int x[n+5];
    ll s=0;
    for(int i=0; i<n; i++){
        cin>>x[i];
        if(x[i]%2!=0){
            a.pb(x[i]);
        }
        else b.pb(x[i]);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if(a.size()==0){
        cout<<"0";
        return 0;
    }
    else if(a.size()%2==0){
        for(int i=1; i<a.size(); i++){
            s+=a[i];
        }
        for(int i=0; i<b.size(); i++){
            s+=b[i];
        }
        cout<<s;
        return 0;
    }
    else {
        for(int i=0; i<a.size(); i++){
            s+=a[i];
        }
        for(int i=0; i<b.size(); i++){
            s+=b[i];
        }
        cout<<s;
        return 0;
    }
}
