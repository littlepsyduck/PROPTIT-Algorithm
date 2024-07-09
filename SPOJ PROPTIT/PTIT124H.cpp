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
	int x1, x2, x3, x4, y1, y2, y3, y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	float d1 = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	float d2 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	float d3 = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	if (d1 > d2 && d1 > d3)
	{
		int x = x2 + x3 - x1, y = y2 + y3 - y1;
		cout << x << " " << y;
	}
	else if (d2 > d1 && d2 > d3)
	{
		int x = x1 + x3 - x2, y = y1 + y3 - y2;
		cout << x << " " << y;
	}
	else if (d3 > d2 && d3 > d1)
	{
		int x = x2 + x1 - x3, y = y2 + y1 - y3;
		cout << x << " " << y;
	}
}
