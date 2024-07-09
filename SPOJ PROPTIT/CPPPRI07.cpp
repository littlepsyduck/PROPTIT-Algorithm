#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'

using namespace std;

const int Nmax = 1e6;

void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}

bool sphenic(long long n){
    int dem = 0;
    for(int i = 2; i <=sqrt(n); i++){
        if(n%i==0){
            ++dem;
            int mu=0;
            while(n%i==0){
                ++mu;
                n/=i;
            }
            if(mu>=2) return false;
        }
    }
    if(n>1) ++dem;
    return dem==3;
}


int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(sphenic(n)) cout<<1;
		else cout<<0;
		cout<<"\n";
	}
}
