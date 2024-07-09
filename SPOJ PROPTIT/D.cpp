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


int sss[Nmax];
void solve(){
    int cnt=0;
    int j=0;
	int n, s;
    cin>>n>>s;
    int s0=s;
    int n0=n;
    while(n--){
        string  ss;
        cin>>ss;
        sss[j]=ss[0]-'0';
        if(ss.size()==2){
            sss[j]++;
        }
        j++;
    }
    //cout<<sss;
    for(int i=0; i<n0; i++){
        if(s<sss[i]){
            s=s0;
            cnt++;
        }
        s-=sss[i];
    }
    cout<<cnt;
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
