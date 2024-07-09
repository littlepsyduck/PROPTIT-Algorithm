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
	int a, b, c, d;
	while(cin>>a>>b>>c>>d){
		if(a==0&&b==0&&c==0&&d==0) return 0;
		else{
            int cnt=0;
			while(1){
				if(a==b&&b==c&&c==d&&d==a){
					break;
				}
				else{
					int e=a;
					a=abs(a-b), b=abs(b-c), c=abs(c-d), d=abs(d-e);
					cnt++;
				}
			}
			cout<<cnt<<"\n";
		}
	}
}
