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
void solve(){
    
		int n, s;
		cin>>n>>s;
		for(int i=1; i<=n; i++){
			cin>>a[i];
		}
		int k=1;
        int ss=a[1];
        int minn=Nmax;
		for(int i=2; i<=n; i++){
			ss+=a[i];
			while(ss-a[k]>=s&&k<i){
				ss-=a[k];
				k++;
			}
			if(ss>=s) minn=min(minn, i-k+1);
		}
		if(minn==Nmax) cout<<0;
		else cout<<minn;
		cout<<"\n";
}

int main()
{
	fast();
	int t;
	cin>>t;
	while(t--){
        solve();
	}
}
