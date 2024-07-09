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

int n, k, a[Nmax]; 
int cnt, ok; 
void init(){
	cnt=1;
    a[1]=n;
}

void sinh(){
	int i=cnt;
	while(i>=1&&a[i]==1){
		i--;
	}
    if(i==0){
        ok=0;
        return;
    }
	int d=cnt-i+1;
    a[i]--;
    cnt=i;
    int q=d/a[i];
    int r=d%a[i];
    for(int j=1; j<=q; j++){
        a[++cnt]=a[i];
    }
    if(r){
        a[++cnt]=r;
    }
}


void solve(){
    cin>>n;
    ok=1;
    init();
    while(1){
        cout<<"(";
        for(int i=1; i<=cnt-1; i++){
            cout<<a[i];
            cout<<" ";
        }
        cout<<a[cnt];
        cout<<") ";
        sinh();
        if(ok==0) break;
    }
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
