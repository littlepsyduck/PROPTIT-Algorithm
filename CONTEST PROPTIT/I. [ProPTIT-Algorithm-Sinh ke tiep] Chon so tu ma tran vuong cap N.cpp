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

vector<vector<int> > v;
int n, k;
int a[Nmax], f[1000][1000];
void init(){
    for(int i=1; i<=n; i++){
        a[i]=i;
    }
}

int ok;
void next(){
    int i=n;
    while(a[i]>a[i+1]) i--;
    if(i==0){
        ok=0;
        return;
    }
    int r;
    for(int j=n; j>i; j--){
        if(a[j]>a[i]){
            r=j;
            break;
        }
    }
    swap(a[i], a[r]);
    reverse(a+i+1, a+n+1);
}

void solve(){
    init();
    ok=1;
    while(true){
        int sum=0;
        for(int i=1; i<=n; i++){
            sum+=f[i][a[i]];
        }
        if(sum==k){
            vector<int> tmp(a+1, a+n+1);
            v.pb(tmp);
        }
        next();
        if(ok==0) break;
    }   
    cout<<v.size()<<"\n";
    for(int i=0; i<v.size(); i++){
        for(int c : v[i]){
            cout<<c<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
	fast();
	cin>>n>>k;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>f[i][j];
        }
    }
    solve();
}
