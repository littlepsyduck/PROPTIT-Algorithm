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


int a[Nmax];
map<int, int> m;
int c[Nmax];
int main()
{
	fast();
	int n;
	cin>>n;
	int cnt=0;
    int j=0;
	for(int i=1; i<=n; i++){
		cin>>a[i];
		if(m[a[i]]==0){
			cnt++;
			m[a[i]]=1;
            c[j]=a[i];
            j++;
		}
	}
	if(cnt>3){
		cout<<"NO";
	}
	else{
		sort(c, c+3);
		if(cnt==3){
			if(c[2]-c[1]==c[1]-c[0]) cout<<"YES";
			else cout<<"NO";
		}
		else cout<<"YES";
	}
}
