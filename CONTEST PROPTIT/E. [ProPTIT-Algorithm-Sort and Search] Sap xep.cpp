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
int f[Nmax];
vector<int> v;

bool cmp(int a, int b){
	if(f[a]==f[b]) return a<b;
	else return f[a]>f[b];
}

void solve(){
    
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
        if(f[a[i]]==0) v.pb(a[i]);
		f[a[i]]++;

	}
	sort(v.begin(), v.end(), cmp);
	for(int i=0; i<v.size(); i++){
		while(f[v[i]]>0){
            cout<<v[i]<<" ";
            f[v[i]]--;
        }
        
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
