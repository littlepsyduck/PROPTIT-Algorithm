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


int n, k;
int a[10000007];
int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
        int cnt=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]<=k) cnt++;
        }
        int cnt2=0;
        for(int i=0; i<cnt; i++){
            if(a[i]>k) cnt2++;
        }
        int x=cnt2;
        for(int i=0, j=cnt; j<n; j++){
            
            if(a[i]>k) cnt2--;
            if(a[j]>k) cnt2++;
            x=min(x, cnt2);
            i++;
        }
        cout<<x;
		cout<<"\n";
	} 
}
