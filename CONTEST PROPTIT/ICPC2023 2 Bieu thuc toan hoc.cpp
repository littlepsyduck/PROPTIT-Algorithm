#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

ll UCLN(ll a, ll b)
{
	if (a == 0 || b == 0)
		return a + b;
	else
	{
		ll gan;
		while (b != 0)
		{
			gan = a;
			a = b;
			b = gan % b;
		}
		return a;
	}
}
ll BCNN(ll a, ll b)
{
	return (a * b / UCLN(a, b));
}
struct ps
{
	ll mau, tu;
};
ps nhan(ll k, ps a)
{
	ps b;
	b.tu = k * a.tu;
	b.mau = a.mau;
	if (b.tu == 0)
		b.mau = 1;
	return b;
}
ps cong(ps a, ps b)
{
	ps c;
	if (a.tu == 0 && b.tu != 0)
	{
		//	b.mau = 1;
		return b;
	}
	else if (a.tu != 0 && b.tu == 0)
	{
		//	a.mau = 1;
		return a;
	}
	else if (a.tu == 0 && b.tu == 0)
	{
		a.mau = 1;
		return a;
	}

	ll f = a.mau, l = b.mau;
	ll k = BCNN(f, l);
	c.tu = k / a.mau * a.tu + k / b.mau * b.tu;
	c.mau = k;

	return c;
}
ps mu(ll k)
{
	ps a, b;
	a.tu = 3;
	a.mau = 2;
	b.tu = 1;
	b.mau = 1;
	if (k == 0)
		return b;
	if (k == 1)
		return a;
	for (int i = 2; i <= k; i++)
	{
		a.tu *= 3;
		a.mau *= 2;
	}
	return a;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin >> s;
	ps a;
	ll l = s.size() - 1;
	a.mau = 1;
	a.tu = s[l] - '0';
	//	cout<<tong.tu <<" " <<tong.mau<<endl;
	for (int i = 0; i < l; i++)
	{
		ll k = s[i] - '0';
		a = cong(a, nhan(k, mu(l - i)));
		//		cout<<tong.tu <<" " <<tong.mau<<endl;
	}

	if (a.tu % a.mau == 0)
		cout << a.tu / a.mau;
	else
	{
		ll k = a.tu / a.mau;
		if (k > 0)
			cout << k << " ";
		a.tu -= k * a.mau;
		ll x = UCLN(a.tu, a.mau);
		cout << a.tu / x << "/" << a.mau / x;
	}
}