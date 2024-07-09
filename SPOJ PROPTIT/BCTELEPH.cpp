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


string s[Nmax];
map<string, int> m;
int main()
{
	fast();
	int t;
    cin>>t;
    while(t--){
        m.clear();
        int n;
        cin>>n;
        for(int i=1; i<=n; i++){
            cin>>s[i];
            m[s[i]]++;
        }
        int cnt=0;
        for(int i=1; i<=n; i++){
            string ss="";
            for(int j=0; j<s[i].size(); j++){
                ss=ss+s[i][j];
                if(ss!=s[i]&&m[ss]!=0){
                    cnt++;
                    break;
                }
            }            
        }
        if(cnt!=0) cout<<"NO";
        else cout<<"YES";
        cout<<"\n";
    }
}
