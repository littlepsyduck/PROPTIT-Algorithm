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


pair<int, int> a[Nmax];
int main()
{
	fast();
	int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>a[i].first>>a[i].second;
	}
	sort(a+1, a+n+1);
	int cnt=0;
	int res=0;
	for(int i=1; i<=n; i++){
		if(a[i].first>=res){
			cnt++;
			res=a[i].second;
		}
        else if(a[i].second<res){
            res=a[i].second;
        }
	}
	cout<<cnt;
}