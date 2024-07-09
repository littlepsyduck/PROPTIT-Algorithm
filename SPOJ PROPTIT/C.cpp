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
int b[Nmax];
int c[Nmax];
int f[Nmax];
int x[Nmax];
int y[Nmax];
void solve(){
    int n, m, k;
    cin>>n>>m>>k;
    for(int i=0; i<n; i++){
        cin>>a[i];
        f[a[i]]++;
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
        f[b[i]]++;
    }
    for(int i=0; i<k; i++){
        cin>>c[i];
        f[c[i]]++;
    }
    sort(a, a+n);
    sort(b, b+m);
    sort(c, c+k);
    int j=0, z=0;
    for(int i=0; i<10005; i++){
        if(f[i]!=0){
            if(f[i]==3){
                y[j]=i;
                j++;
                f[i]=1;    
            }
            x[z]=i;
            z++;
            f[i]=0;
        }
    }
    for(int i=0; i<z; i++){
        cout<<x[i]<<" ";
    }
    cout<<"\n";
    for(int i=0; i<j; i++){
        cout<<y[i]<<" ";
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
