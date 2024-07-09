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
		int x;
		cin>>x;
		if(x==25){
			a[1]++;
            continue;
		}
		if(x==50){
			if(a[1]>0){
				a[1]-=1;
				a[2]++;
			}
			else{
				cout<<"NO";
				return 0;
			}
		}
		else{
			if(a[1]>0&&a[2]>0){
				a[1]-=1;
				a[2]-=1;
			}
			if(a[1]==3){
				a[1]-=3;
			}
			else{
				cout<<"NO";
				return 0;
			}
		}
	}
	cout<<"YES";
}
