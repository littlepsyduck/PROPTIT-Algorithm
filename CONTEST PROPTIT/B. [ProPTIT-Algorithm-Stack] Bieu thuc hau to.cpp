#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'
#define pb push_back
#define bop pop_back
#define fast                          \
	ios_base::sync_with_stdio(false); \
	cin.tie(0);                       \
	cout.tie(0);
#define test  \
	int t;    \
	cin >> t; \
	while (t--)

using namespace std;

const int Nmax = 1e6;

int prio(char c)
{
	if (c == '^')
		return 4;
	if (c == '*' || c == '/')
		return 3;
	if (c == '+' || c == '-')
		return 2;
	return 1;
}

void solve()
{
	string s;
	cin >> s;
	string res = "";
	stack<char> st;
	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] == '(')
			st.push(s[i]);
		else if (s[i] == ')')
		{
			while (st.top() != '(')
			{
				res += st.top();
				st.pop();
			}
			st.pop();
		}
		else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^')
		{
			while (!st.empty() && prio(st.top()) >= prio(s[i]))
			{
				res += st.top();
				st.pop();
			}
			st.push(s[i]);
		}
		else
			res += s[i];
	}
	while (!st.empty())
	{
		if (st.top() != '(')
			res += st.top();
		st.pop();
	}
	cout << res;
}

int main()
{
	fast
		test
	{
		solve();
		cout << "\n";
	}
}
