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
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
        int cnt=0;
        for(int i=1; i<=x; i++){
            if(__gcd(i, x)==1){
                cnt++;
            }
        }
		if(checksnt(cnt)) cout<<1;
		else cout<<0;
		cout<<"\n";
	}
}
