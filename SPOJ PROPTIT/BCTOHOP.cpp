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

int x[15], n, k;
void output(){
	for (int i = 1; i <= k; i++){
		cout <<x[i]<<" ";
	}
	cout <<"\n";
}
void solve(int i){
	for (int j = x[i-1] + 1; j <= n - k + i; j++){
		x[i] = j;
		if (i == k) output();
		else {
			solve(i+1);
		}
	}
}

int main()
{
	fast();
	cin >> n >> k;
	solve(1); 
}
