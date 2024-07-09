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


int a[Nmax], b[Nmax];
int main()
{
	fast();
	int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>a[i]>>b[i];
	}
	int cnt=1, k=1;
	for(int i=1; i<=5; i++){
		int cnt2=0;
		for(int j=1; j<=n; j++){
			if(a[j]==i||b[j]==i){
				cnt2++;
			}
			else{
				if(cnt2>cnt){
					cnt=cnt2;
					k=i;
				}
				else if(cnt2==cnt){
					k=min(k, i);
				}
				cnt2=0;
			}
		}
	}
	cout<<cnt<<" "<<k;
}
