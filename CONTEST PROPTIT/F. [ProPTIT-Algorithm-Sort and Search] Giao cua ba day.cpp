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
	cin.tie(0);
	cout.tie(0);
}

void solve()
{
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	ll a[n1 + 5];
	ll b[n2 + 5];
	ll c[n3 + 5];
	map<ll, ll> f1;
	map<ll, ll> f2;
	map<ll, ll> f3;
	for (int i = 0; i < n1; i++)
	{
		cin >> a[i];
		f1[a[i]]++;
	}
	for (int i = 0; i < n2; i++)
	{
		cin >> b[i];
		f2[b[i]]++;
	}
	for (int i = 0; i < n3; i++)
	{
		cin >> c[i];
		f3[c[i]]++;
	}
	sort(a, a + n1);
	vector<ll> giao;
	for (int i = 0; i < n1; i++)
	{
		if (f2[a[i]] && f3[a[i]])
		{
			giao.pb(a[i]);
			f1[a[i]] = 0;
		}
	}
	for (int i = 0; i < n2; i++)
	{
		if (f1[b[i]] && f3[b[i]])
		{
			giao.pb(b[i]);
			f2[b[i]] = 0;
		}
	}
	for (int i = 0; i < n3; i++)
	{
		if (f2[c[i]] && f1[c[i]])
		{
			giao.pb(c[i]);
			f3[c[i]] = 0;
		}
	}
	sort(giao.begin(), giao.end());
	// for(int i=0; i<giao.size(); i++){
	//     cout<<giao[i]<<" ";
	// }
	if (giao.size() == 0)
	{
		cout << -1;
	}
	else
	{
		for (int i = 0; i < giao.size(); i++)
		{
			cout << giao[i] << " ";
		}
	}
}

int main()
{
	fast();
	int t;
	cin >> t;
	while (t--)
	{
		solve();
		cout << "\n";
	}
}
