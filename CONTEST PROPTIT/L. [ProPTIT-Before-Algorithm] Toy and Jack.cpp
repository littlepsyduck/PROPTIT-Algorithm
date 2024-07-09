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

int a[Nmax];
int b[Nmax];
int n, k;
void next(){
	int i=k; 
	while(i>=1&&a[i]==n-k+i){
		--i;
	}
    int cnt=0;
	if(i==0){
		cout<<k;
	}
	else{
		a[i]++;
		for(int j=i+1; j<=k; j++){
			a[j]=a[j-1]+1;
		}
		for(int i=1; i<=k; i++){
			for(int j=1; j<=k; j++){
                if(b[j]==a[i]) cnt++;
            }
		}
        cout<<k-cnt;
	}
}

void solve(){
	cin>>n>>k;
	for(int i=1; i<=k; i++){
		cin>>a[i];
        b[i]=a[i];
	}
	next();
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
