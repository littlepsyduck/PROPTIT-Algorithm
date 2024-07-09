#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'

using namespace std;

const int Nmax = 1e6;

void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}


int a[1005];
int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		int n, m;
        int x=0;
        cin>>n>>m;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a, a+n);
        for(int i=0; i<n-2; i++){
            for(int j=i+1; j<n-1; j++){
                for(int k=j+1; k<n; k++){
                    if(a[i]+a[j]+a[k]<=m){
                        if(a[i]+a[j]+a[k]>x) x=a[i]+a[j]+a[k];
                    }
                }
            }
        }
        cout<<x<<"\n";
	} 
}
