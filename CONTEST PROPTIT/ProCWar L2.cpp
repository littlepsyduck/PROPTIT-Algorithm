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
ll b[Nmax];
void solve(){
	int n;
	cin>>n;
	ll maxx;
	for(int i=0; i<n; i++){
		cin>>a[i];
		b[i]=a[i];
	}
	sort(a, a+n);
    int x;
    int y=Nmax;
    if(a[0]*a[1]>a[n-1]*a[n-2]){
        maxx=a[0]*a[1];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(b[i]==a[0]&&b[j]==a[1]){
                    x=abs(j-i)-1;
                }
            }
            if(x<y) y=x;
        }
    }
    else{
        maxx=a[n-1]*a[n-2];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(b[i]==a[n-1]&&b[j]==a[n-2]){
                    x=abs(j-i)-1;
                }
            }
            if(x<y) y=x;
        }
    }
	cout<<y<<" "<<maxx;
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
