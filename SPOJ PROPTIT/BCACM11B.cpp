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
	while(t--){
		int n, x, y;
		cin>>n>>x>>y;
		int a[n][n];
		int dong = n, cot = n, k = 1, p = 0, i, j;
		while(k <= n*n){
			for(i = p; i < cot; i++) 
				a[p][i] = k++;
			for(i = p+1; i < dong; i++) 
				a[i][cot-1] = k++;
			if ( p != dong-1){
				for(i = cot-2; i >=p; i--) 
					a[dong-1][i] = k++;
			}	
			if(p!=cot-1){
				for(i = dong-2; i > p; i--) 
					a[i][p] = k++;
			}	
			p++;dong --; cot --;
			}
			cout << a[x-1][y-1];
			cout << "\n";
	} 
}
	

