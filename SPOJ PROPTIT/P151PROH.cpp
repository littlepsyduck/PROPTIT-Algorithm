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


string n, m;
int main()
{
	fast();
	cin>>n;
	int l=n.size();
	for(int i=0; i<l; i++){
		if(n[i]!='1'&&n[i]!='4'){
			cout<<"NO";
			return 0;
		}
		else{
			if(n[i]=='1'){
				m="0";
				continue;
			}
			if(m=="" || m=="044"){
				cout<<"NO";
				return 0;
			}
			m+=n[i];
		}
	}
	cout<<"YES";

}
