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
	int n;
    cin>>n;
	cin>>a[1]>>a[2]>>a[3];
	sort(a+1, a+3+1);
	int cnt=0;
	for(int i=0; i<=n/a[1]; i++){
		for(int j=0; j<=n/a[2]; j++){
			int c=n-i*a[1]-j*a[2];
			if(c>=0&&c%a[3]==0){
				cnt=max(cnt, i+j+c/a[3]);
			}
		}
	}
	cout<<cnt;
}
