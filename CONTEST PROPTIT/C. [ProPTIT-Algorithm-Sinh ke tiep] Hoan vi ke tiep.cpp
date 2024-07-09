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

int n, a[Nmax];

void sinh(){
	int i=n-1;
	while(i>=1&&a[i]>a[i+1]){
		i--;
	}
	if(i==0){
        for(int i=1; i<=n; i++){
            cout<<i<<" ";
        }
    } 
	else{
		int k=n;
		while(a[i]>a[k]) k--;
		swap(a[k],a[i]);
		reverse(a+i+1, a+n+1);
        for(int i=1; i<=n; i++){
            cout<<a[i]<<" ";
        }
	}
}

int main()
{
	fast();
	int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }
		sinh();
        cout<<"\n";
	}
}
