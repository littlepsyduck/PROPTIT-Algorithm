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


char a[35][35];
int main()
{
	fast();
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			cin>>a[i][j];
		} 
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			if (a[i][j]!='.'){
				if (a[i][j]==a[i-1][j]&&a[i][j]==a[i+1][j]){
					cout<<a[i][j];
					return 0;
                }
				else if (a[i][j]==a[i][j-1]&&a[i][j]==a[i][j+1]){
					cout<<a[i][j];
					return 0;
				}
				else if (a[i][j]==a[i-1][j-1]&&a[i][j]==a[i+1][j+1]){
					cout<<a[i][j];
					return 0;
				}
				else if (a[i][j]==a[i-1][j+1]&&a[i][j]==a[i+1][j-1]){
					cout<<a[i][j];
					return 0;
				}
			}
		}
	}
	cout<<"ongoing";
}
