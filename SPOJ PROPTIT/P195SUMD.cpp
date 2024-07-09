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


int a[Nmax], f[Nmax];
int main()
{
	fast();
	int n;
	cin>>n;
	for(int i=1; i<=2*n; i++){
		cin>>a[i];
	}
	int cnt=0;
	for(int i=1; i<2*n; i++){
		if(f[a[i]]==0){
            f[a[i]]++;
			int cnt2=0;
			for(int j=i+1; j<=2*n; j++){
				if(f[a[j]]==0){
					cnt2++;
				}
				if(a[i]==a[j]){
					cnt+=cnt2;
					break;
				}
			}
			
		}
	}
	cout<<cnt;
}
