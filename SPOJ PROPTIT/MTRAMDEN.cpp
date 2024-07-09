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

int MN() {
	int k;
	cin >> k;
	if (k < 6) { cout << "-1 -1"; return 0; }
	else for (int m = sqrt(k); m >= 1; m--) {
		for (int n = m; (2 * m * n + m + n + 1) <= (2 * k); n++)
			if ((2 * m * n + m + n + 1) == (2 * k)) {
				cout << m << " " << n << endl;
				return 0;
			}
	}
	cout << "-1 -1" << endl;
	return 0;
}

int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
	cin >> n;
	for (int i = 1; i <= n; i++) MN();
	return 0;
	} 
}
