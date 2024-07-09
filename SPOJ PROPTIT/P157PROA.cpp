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
int main()
{
	fast();
	int t;
    cin>>t;
    while(t--){
	    int n;
	    cin>>n;
	    memset(a, 0, sizeof(a));
	    for(int i=1; i<=n; i++){
		    int x;
		    cin>>x;
		    a[x]++;
	    }
	    int cnt=0, min =0;
	    for(int i=1; i<=1000; i++){
		    if(a[i]>min) min=a[i], cnt=i;
	    }
	    cout<<cnt<<"\n";
    }

}