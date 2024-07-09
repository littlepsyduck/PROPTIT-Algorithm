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
int main()
{
	fast();
	int n, m, k;
	cin>>n>>m>>k;
	for(int i=1; i<=m; i++){
		int x;
        cin>>x;
        for(int i=max(x-k, 0); i<=min(x+k, n); i++){
            a[i]=1;
        }
	}
    int l=2*k+1;
    int z=0;
    int cnt=0;
    a[n+1]=1;
	for(int i=1; i<=n+1; i++){
		if(a[i]==0){
			z++;
		}
        else{
            if(z%l!=0) cnt+=z/l+1;
            else cnt+=z/l;
            z=0;
        }
	}
    cout<<cnt;
}
