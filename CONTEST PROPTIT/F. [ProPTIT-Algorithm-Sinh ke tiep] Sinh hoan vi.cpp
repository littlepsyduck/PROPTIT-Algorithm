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
// Sinh hoán vị
// Các biến toàn cục và hàm khởi tạo cấu hình đầu
int n, a[Nmax]; // lưu cấu hình
int cnt;		// check cấu hình cuối
void init()
{
	for (int i = 1; i <= n; i++)
	{
		a[i] = i;
	}
}

// Hàm sinh cấu hình kế tiếp
void sinh()
{
	int i = n - 1;
	while (i >= 1 && a[i] > a[i + 1])
	{
		i--;
	}
	if (i == 0)
		cnt = 1;
	else
	{
		int k = n;
		while (a[i] > a[k])
			k--;
		swap(a[k], a[i]);
		reverse(a + i + 1, a + n + 1);
	}
}

void solve()
{
	cin >> n;
	init();
	while (cnt == 0)
	{
		for (int i = 1; i <= n; i++)
		{
			cout << a[i];
		}
		cout << " ";
		sinh();
	}
	cnt=0;
}

// Hàm main
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
