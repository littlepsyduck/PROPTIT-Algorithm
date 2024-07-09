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


char a[105][105];
int main()
{
	fast();
	string s;
	cin>>s;
	int l=s.size();
	int r=0;
	for(int i=sqrt(l); i>=1; i--){
		if(l%i==0){
			r=i;
			break;
		}
	}
	int c=l/r;
	int i=0;
	for(int j=1; j<=c; j++){
		for(int k=1; k<=r; k++){
			a[k][j]=s[i];
			i++;
		}
	}
	for(int i=1; i<=r; i++){
		for(int j=1; j<=c; j++){
			cout<<a[i][j];
		}
	}
}
