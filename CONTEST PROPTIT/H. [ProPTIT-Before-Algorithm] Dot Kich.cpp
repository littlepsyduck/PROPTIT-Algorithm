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
	cin.tie(0);cout.tie(0); 
}

int main()
{
	fast();
	int n, k;
	cin>>n>>k;
    int cnt=0;
	for(int i=n; i>=1; i--){
        int x=k-i;
        if(x>0&&x!=i&&x<=n) cnt++;
	}
	cout<<cnt/2;
}
