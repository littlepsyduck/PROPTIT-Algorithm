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



int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		int A[30];
		int n;
		cin>>n;
		int s=0;
		for (int i = 1; i <= n; i++) {
			cin>>A[i];
		}
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				if(A[j] < A[i]) {
					int temp =  A[i];
					A[i] = A[j];
					A[j] = temp; 
				} 
			} 
		} 
		for (int i = 1; i < n; i++) {
			s+=(A[i+1]-A[i]);
		}
		s+=(A[n]-A[1]);
		cout<<s<<"\n";
	} 
}
