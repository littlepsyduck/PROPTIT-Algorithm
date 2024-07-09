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

int a[30];
void in(int a[], int n){
	for (int i = 1; i <= n; i++){
		cout << a[i];
	}
	cout <<" ";
}
void dequy(int x, int k, int n){
	for (int i = a[x-1] + 1; i <= n - (k-x); i++){
		a[x] = i;
		if (x == k) in(a, k);
		else {
			dequy(x+1, k, n);
		}
	}
}


int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		a[0] = 0;
		dequy(1, k, n);
		cout<<"\n";
	} 
}
