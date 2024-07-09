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

bool check = false;
void sinh(int b[], int n){
	bool ok = false;
	for(int i=n-1; i>=0; i--){
		if(b[i]==0){
			ok = true;
			b[i]=1;
			for(int j=i+1; j<n; j++){
				b[j]=0;
			}
			break;
		}
	}
	if(ok==false) check = true;
}

bool ktra(int a[], int b[], int n, int k){
	int s=0;
	for(int i=0; i<n; i++){
		if(b[i]==1) s+=a[i];
	}
	if(s==k) return true;
	return false;
}

int a[1005];
int b[1005];
int main()
{
	fast();
	int n, k;
	cin>>n>>k;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int dem=0;
	while(check==false){
		if(ktra(a, b, n, k)){
            cout<<"YES";
            dem++;
            break;
        } 
		sinh(b, n);
	}
	if(dem==0) cout<<"NO";
}
