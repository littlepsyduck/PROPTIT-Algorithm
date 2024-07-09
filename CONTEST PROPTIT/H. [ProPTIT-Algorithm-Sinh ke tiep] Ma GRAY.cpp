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
int cnt; 


void sinh(){
    k=1;
    for(int i=1; i<=n; i++){
        k*=2;
    }
    string s[k+5];
    s[1]="0";
    s[2]="1";
	if(n>1){
        cnt=2;
        for(int i=2; i<=n; i++){
            int l=1;
            for(int j=1; j<=i; j++){
                l*=2;
            }
            for(int j=1; j<=cnt; j++){
                s[l-j+1]="1"+s[j];
                s[j]="0"+s[j];
            }
            cnt=l;
        }
    }
    for(int i=1; i<=k; i++){
        cout<<s[i]<<" ";
    }
}

void solve(){
	cin>>n;
    sinh();
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

