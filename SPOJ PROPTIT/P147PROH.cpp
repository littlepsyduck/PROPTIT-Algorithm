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


int x[1005];
int main()
{
	fast();
	string a, b;
	int t=0;
	while(cin>>a>>b)
	{
		t++;
		if(a=="END"&&b=="END") return 0;
		else{
			cout<<"Case "<<t<<": ";
			if(a.size()!=b.size()){
				cout<<"different";
			}
			else{
				memset(x, 0, sizeof(x));
				for(int i=0; i<a.size(); i++){
					x[a[i]]++;
				}
				int cnt=0;
				for(int i=0; i<b.size(); i++){
					if(x[b[i]]!=0) x[b[i]]--;
					else{
						cout<<"different";
						cnt++;
						break;
					}
				}
				if(cnt==0) cout<<"same";
			}
			cout<<"\n";
		}
	} 
}
