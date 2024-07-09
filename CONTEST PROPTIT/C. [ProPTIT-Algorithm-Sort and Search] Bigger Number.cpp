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

string a, b;
int c[15];
void solve(){
    cin>>a>>b;
    memset(c, 0, sizeof(c));
    for (int i=0; i<b.size(); i++){
        c[b[i]-'0']++;
    }
    for (int i=0; i<a.size(); i++){
        for (int j=9; j>a[i]-'0'; j--){
            if(c[j]>0){
                a[i]=j+'0';
                c[j]--;
                break;
            }
        }
    }
    cout<<a;
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
