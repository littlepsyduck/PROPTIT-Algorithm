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

int n, cnt;
int sum, sum1, sum2;
priority_queue<int, vector<int>, greater<int>> pq1;
priority_queue<int, vector<int>, greater<int>> pq2;
priority_queue<int> pq;
int a[Nmax];
void solve()
{
    cin >> n;
    cnt = 0;
    sum1 = 0, sum2 = 0;
    while (pq.size())
        pq.pop();
    while (pq1.size())
        pq1.pop();
    while (pq1.size())
        pq1.pop();
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 3 == 0)
            pq.push(a[i]);
        else if (a[i] % 3 == 1)
        {
            pq1.push(a[i]);
            sum1 += a[i];
        }
        else if (a[i] % 3 == 2)
        {
            pq2.push(a[i]);
            sum2 += a[i];
        }
    }
    int sum3 = sum1 + sum2;
    if (sum3 % 3 == 1)
    {
        if (pq1.size() > 0)
        {
            pq1.pop();
        }
        else
        {
            if (pq2.size() > 1)
            {
                pq2.pop();
                pq2.pop();
            }
            else
            {
                cout << -1;
                cnt = 1;
            }
        }
    }
    else if (sum3 % 3 == 2)
    {
        if (pq2.size() > 0)
        {
            pq2.pop();
        }
        else
        {
            if (pq1.size() > 1)
            {
                pq1.pop();
                pq1.pop();
            }
            else
            {
                cout << -1;
                cnt = 1;
            }
        }
    }
    while (pq1.size())
    {
        pq.push(pq1.top());
        pq1.pop();
    }
    while (pq2.size())
    {
        pq.push(pq2.top());
        pq2.pop();
    }
    if (pq.empty())
    {
        cout << -1;
        cnt = 1;
    }
    else if (pq.top() == 0)
    {
        cout << 0;
        cnt = 1;
    }
    if (cnt == 0)
    {
        while (pq.size())
        {
            cout << pq.top();
            pq.pop();
        }
    }
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
