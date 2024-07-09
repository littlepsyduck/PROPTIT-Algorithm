#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'

using namespace std;

const int Nmax = 1e6;

void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}

int A[100005];
int main()
{
	fast();
	int n, k;
	cin>>n>>k;
	for (int i = 0; i < n; i++) {
		cin>>A[i];
	}
	sort(A,A+n);
		cout<<A[k];
}
