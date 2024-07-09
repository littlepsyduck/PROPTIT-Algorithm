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
int f[Nmax];
int b[Nmax];

int binarySearch(int A[], int x, int n, ll target) {
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
    
	int n, k;
	cin>>n>>k;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	sort(a, a+n);
    int cnt=0;
	for(int i=0; i<n; i++){
        cnt+=(upper_bound(a, a+n, k-a[i]) - lower_bound(a, a+n, k-a[i]));
	}
	cout<<cnt/2;
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
