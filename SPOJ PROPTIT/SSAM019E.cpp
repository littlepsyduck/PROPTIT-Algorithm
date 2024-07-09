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


int a[30];
int main()
{
	fast();
	int n, k;
	int cnt = 0;
    cin >> n >> k; 
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (int i = n - 1; i >= 0; i--)
    {
        int x=k/a[i];
        cnt+=x;
        k-=a[i]*x;
    }
    cout << cnt;
}
