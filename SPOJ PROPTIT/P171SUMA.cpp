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


pair<int, int> p[10];

void solve(){
    for(int i=1; i<=4; i++){
        cin>>p[i].first>>p[i].second;

    }
    sort(p+1, p+4+1);
    if(p[1].first==p[3].first||p[2].second==p[1].second){
        cout<<"NO";
        return;
    }
    if(p[1].first==p[2].first&&p[1].second==p[3].second&&p[1].first-p[3].first==p[2].first-p[4].first&&p[1].second-p[2].second==p[3].second-p[4].second){
        cout<<"YES";
    }
    else cout<<"NO";
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
