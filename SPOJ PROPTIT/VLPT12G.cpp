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


vector<int> v;
int main()
{
	fast();
	for(int i=1; (i+1)*i/2<=1000000000; i++){
		int s=(i+1)*i/2;
		if(sqrt(s+1)==(int)sqrt(s+1))	v.pb(s);
	}
	int a, b;
	int t=0;
	while(cin>>a>>b)
	{
		if(a==0&&b==0) return 0;
        else{
            t++;
		    cout<<"Case "<<t<<": ";
		    int cnt=0;
		    for(int i=0; i<v.size(); i++){
			    if(a<v[i]+1&&v[i]+1<b) cnt++;
			    else if(v[i]>b) break;
		    }
		    cout<<cnt;
		    cout<<"\n";
        }
	} 
}
