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

ll a[Nmax];
ll f[Nmax];

int binarySearch(ll A[], int x, int n, ll target) {
    int l=x, r=n;
    while (l<=r) {
        int mid=l+(r-l)/2;
        if (A[mid]==target)
            return mid;       	
        else if (A[mid]<target)
            l=mid+1;
        else
            r=mid-1;
    }
    return -1;
}    	

void solve(){
	int n;
	ll k;
	cin>>n>>k;
	for(int i=1; i<=n; i++){
		cin>>a[i];
		f[i]=f[i-1]+a[i];
	}
	int j=0;
    int cnt=0;
	for(int i=1; i<=n; i++){
        j=binarySearch(f, i, n, k+f[i-1]);
		if(j!=-1 && f[j]-f[i-1]==k){
            for(int y=i; y<=j; y++){
                cout<<a[y]<<" ";
            }
            cnt++;
            break;
        }
	}
    if(cnt==0) cout<<"NOT FOUND";
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
