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
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	int i=1; 
	int j=n;
	int cnt=0;
	while(i<j){
		if(a[i]==a[j]){
			i++;
			j--;
		}
		else{
			if(a[i]<a[j]){
				i++;
				a[i]+=a[i-1];
			}
			else{
				j--;
				a[j]+=a[j+1];
			}
			cnt++;
		}
	}
	cout<<cnt;
}
