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

int check(string a, string b){
    int n;
    if(a.size()>b.size()) n=a.size();
    else n=b.size();
    int f[n+5][n+5];
    memset(f, 0, sizeof(f));
    for(int i=0; i<a.size(); i++){
        for(int j=0; j<b.size(); j++){
            if(a[i]==b[j]){
                f[i+1][j+1]=f[i][j]+1;
            }
            else f[i+1][j+1]=max(f[i+1][j], f[i][j+1]);
        }
    }
    return f[a.size()][b.size()];
}

int main()
{
	fast();
	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> v;
        string s;
        for(int i=0; i<n; i++){
            cin>>s;
            v.pb(s);
        }
        int maxx=0;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                maxx=max(maxx, check(v[i], v[j]));
            }
        }
        cout<<maxx;
        cout<<"\n";
    }
}
