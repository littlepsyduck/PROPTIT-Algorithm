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
vector<int> v1, v2, v3, v4;
int main()
{
	fast();
	int n;
	cin>>n;
    
	for(int i=1; i<=n; i++) cin>>a[i];
	for(int i=1; i<=n; i++) cin>>b[i];
	sort(a+1, a+n+1);
    sort(b+1, b+n+1);

    int maxx=abs(a[1]+b[1]);
	int i=1, j=1;
    int k;
    while(i<=n&&j<=n){
        k=abs(a[i]+b[j]);
        while(j<=n&&k>=maxx){
            j++;
        }
        if(k<maxx){
            maxx=k;
            i++;
        } 
        
    }
    cout<<maxx;
}
