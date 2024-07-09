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



int main()
{
	fast();
	int n;
	cin>>n;
	int j=1;
	for(int i=1; i<=n/2+1; i++){
		for(int k=1; k<=(n-j)/2; k++){
			cout<<"*";
		}
		for(int k=1; k<=j; k++){
			cout<<"D";
		}
        for(int k=1; k<=(n-j)/2; k++){
			cout<<"*";
		}
		j+=2;
		cout<<"\n";
	}
	j=1;
	for(int i=1; i<=n/2; i++){
		for(int k=1; k<=j; k++){
			cout<<"*";
		}
		for(int k=1; k<=n-2*j; k++){
			cout<<"D";
		}
        for(int k=1; k<=j; k++){
			cout<<"*";
		}
		j++;
		cout<<"\n";
	}
}
