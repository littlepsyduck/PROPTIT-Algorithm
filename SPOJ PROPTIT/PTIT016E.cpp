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

struct sv{
	int s[15];
};

sv a[Nmax];
int main()
{
	fast();
	int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=11; j++){
			cin>>a[i].s[j];
		}
	}
	ll sum=0;
	for(int i=1; i<=n-2; i++){
		for(int j=2; j<=n-1; j++){
			for(int k=3; k<=n; k++){
				ll sum2=0;
				for(int z=1; z<=11; z++){
					sum2+=max(a[i].s[z], max(a[j].s[z], a[k].s[z]));
				}
				sum=max(sum, sum2);
			}
		}
	}
	cout<<sum;
}
