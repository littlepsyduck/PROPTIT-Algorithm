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

int n, x;
int a[Nmax];
int binarySearch(int A[], int n, int target)
{
	int l = 1, r = n;
	while (l <= r)
	{
		int mid = l + (r - l) / 2;
		if (A[mid] == target)
			return mid;
		else if (A[mid] < target)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return -1;
}

void solve()
{
	cin >> n >> x;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		// if(a[i]==x){
		// 	cnt++;
		// 	continue;
		// }
	}

	if (a[binarySearch(a, n, x)] == x)
		cout << 1;
	else
		cout << -1;
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
