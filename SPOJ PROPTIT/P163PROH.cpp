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
	int t;
	cin>>t;
	while(t--){
		int x;
        cin>>x;
		int cnt=0;
		for(int i=3; i<=Nmax; i++){
			if((float)(i-2)*180/i==x){
				cnt++;
				break;
			}
		}
		if(cnt!=0) cout<<"YES";
		else cout<<"NO";
		cout<<"\n";
	}
}
