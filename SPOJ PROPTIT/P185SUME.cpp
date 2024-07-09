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
vector<int> v;
int main()
{
	fast();
	int n;
	cin>>n;
	int d=0;
	for(int i=1; i<=n; i++){
		cin>>a[i];
		if(m[a[i]]==0){
			d++;
			v.pb(a[i]);
			m[a[i]]=1;
		}
	}
	if(d>3){
		cout<<"NO"; 
	}
    else{
        sort(v.begin(), v.end());
        if(d==3){
            if(v[2]-v[1]==v[1]-v[0]) cout<<"YES";
            else cout<<"NO";
        }
        else{
            cout<<"YES";
        }
    }
}
