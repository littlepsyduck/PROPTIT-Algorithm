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
	string a;
	string b;
	cin>>a>>b;
	int x, y;
	int cnt=0;
	for(int i=0; i<a.size(); i++){
		for(int j=0; j<b.size(); j++){
			if(a[i]==b[j]){
				x=i;
				y=j;
				cnt++;
				break;
			}
		}
		if(cnt!=0) break;
	}
	for(int i=0; i<b.size(); i++){
		for(int j=0; j<a.size(); j++){
			if(i==y){
				cout<<a[j];
			}
			else{
				if(j==x) cout<<b[i];
				else cout<<".";
			}
		}
		cout<<"\n";
	}
}
