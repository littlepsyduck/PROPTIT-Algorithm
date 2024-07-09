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

int checksnt (int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt (n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main()
{
	fast();
	int n, m;
	cin>>n>>m;
	int t=0;
	while(t<n){
		if(checksnt(m)){
			t++;
			cout<<m<<" ";
		}
		m++;
	}	
}
