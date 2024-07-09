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

int n;
int Bool[10] = { 0 };
int A[10];
 
void xuat() {
 for (int i = 1; i <= n; i++)
 cout << A[i];
 cout << "\n";
}
 
void solve(int k) {
    for (int i = 1; i <= n; i++) {
        if (!Bool[i]) {
            A[k] = i; 
        Bool[i] = 1;
        if (k == n)
            xuat();
        else
            solve(k + 1);
        Bool[i] = 0;
        }
    }
}
 
int main()
{
	fast();
	cin >> n;
    solve(1);
}
