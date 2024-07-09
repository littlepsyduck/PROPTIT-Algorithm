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
int s;

void quaylui(int i, int d, int sum){
	if(sum>s) return;
	if(d==0){
		if(sum==s) cnt++;
        
	}
	else{
		for(int j=i+1; j<=n; j++){
			quaylui(j, d-1, sum+j);
		}
	}
}

void solve(){
	
}

int main()
{
	fast();
	while(cin>>n>>k>>s){
        if (n==0 && k==0 && s==0) return 0;
        cnt=0;
	    quaylui(0, k, 0);
	    cout<<cnt;
		cout<<"\n";
	}
}

