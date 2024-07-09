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

bool cmp(string a, string b){
    int l1=a.size(), l2=b.size();
    if(l1!=l2) return l1<l2;
    else return a<b;
}

int main()
{
	fast();
	int t=1;
    int n;
    while(cin>>n){
        if(n==0) return 0;
        else{
            cout<<"Case "<<t<<": ";
            t++;
            vector<string> s(n);
            for(int i=0; i<n; i++){
                cin>>s[i];
                while(s[i].size()>1&&s[i][0]=='0'){
                    s[i].erase(0, 1);
                }
            }
            sort(s.begin(), s.end(), cmp);
            string s0=s[0];
		    int cnt=0;
		    for(int i=1; i<n; i++){
			    if(s[i]!=s0){
				    cnt++;
				    break;
			    }
		    }
            if(cnt!=0) cout<<s[0]<<" "<<s[n-1];
            else cout<<"There is a row of trees having equal height.";
            cout<<"\n";
        }
    }
}
