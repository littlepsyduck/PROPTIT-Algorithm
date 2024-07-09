#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'

using namespace std;

const int Nmax = 1e6;

void fast()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

int n, m;
void solve(){
	cin >> n >> m;
	int a[n + 5], b[n + 5];
	vector<vector<int>> v(n, vector<int>(m + 5, 0));
	for (int i = 0; i < n; i++)
	{
		cin >> a[i] ;
	}
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (i > 0)
			{
				if (a[i] <= j)
					v[i][j] = max(v[i - 1][j], v[i - 1][j - a[i]] + b[i]);
				else
					v[i][j] = v[i - 1][j];
			}
			else if (a[i] <= j)
				v[i][j] = b[i];
		}
	}

	cout << v[n - 1][m];
}

int main()
{
	fast();
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<"\n";
	}
	
}
