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

void solve(){
    int a, b, c;
	cin>>a>>b>>c;
    if(a==0&&(b==0||c==0)){
            cout<<"NO\n";
            return;
    }
    if(b==c||abs(b-c)%3==0){
        cout<<"YES";
    }
    else cout<<"NO";
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
